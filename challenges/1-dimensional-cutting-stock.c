////////////////////////////////////////////////////////////
//////////////////// Problem Definition ////////////////////
////////////////////////////////////////////////////////////
/*
    Each log is a bin of capacity L

    Each piece is an item of size K

    Total quantity of each piece = J × X

    Goal: minimize number of logs Z, equivalently minimize waste

    This problem is NP-hard, so unless constraints are very small. 
    The correct approach in practice is a heuristic.
    The industry-standard choice is First-Fit Decreasing (FFD). 
    FFD is fast and very close to optimal.
*/

////////////////////////////////////////////////////////////
///////////// Strategy (First-Fit Decreasing) //////////////
////////////////////////////////////////////////////////////
/*
    1. Expand all required pieces:
        - For each chair piece (J, K), create J × X items of size K

    2. Sort all pieces in descending order

    3. Place each piece into the first log that has enough remaining space

    4. If none fits, open a new log

    5. Count logs used to find Z

    FFD guarantees:
        Z <= (11/9)Z* + 1

        where Z* is the optimal solution.
*/

////////////////////////////////////////////////////////////
/////////////////////// Input model ////////////////////////
////////////////////////////////////////////////////////////
/*
L 
X 
N 
J1 K1 
J2 K2 
J3 K3 
...
Jn Kn, where 1 <= n <= N
*/

////////////////////////////////////////////////////////////
////////////////////// Input example ///////////////////////
////////////////////////////////////////////////////////////
/*
50 
2 
6 
4 4 
2 5 
2 6 
6 1 
4 2 
2 2
*/

////////////////////////////////////////////////////////////
//////////////////////// Solution //////////////////////////
////////////////////////////////////////////////////////////
#include <stdio.h>

#define MAX_PIECES  10000
#define MAX_LOGS    10000

void swap(int *a, int *b);
int partitionDesc(int arr[], int low, int high);
void quickSortDesc(int arr[], int low, int high);

int main() {
    int L, X, N;
    int pieces[MAX_PIECES];
    int logs[MAX_LOGS];

    int totalPieces = 0;
    int totalLogs = 0;

    scanf("%d", &L);
    scanf("%d", &X);
    scanf("%d", &N);

    // Read pieces and expand quantities
    for (int i = 0; i < N; i++) {
        int J, K;
        scanf("%d %d", &J, &K);

        for (int c = 0; c < J * X; c++) {
            pieces[totalPieces] = K;
            totalPieces++;
        }
    }

    // Sort pieces in decreasing order
    quickSortDesc(pieces, 0, totalPieces - 1);

    // First-Fit Decreasing
    for (int i = 0; i < totalPieces; i++) {
        int placed = 0;

        for (int j = 0; j < totalLogs; j++) {
            if (logs[j] >= pieces[i]) {
                logs[j] -= pieces[i];
                placed = 1;
                break;
            }
        }

        if (!placed) {
            logs[totalLogs] = L - pieces[i];
            totalLogs++;
        }
    }

    printf("Minimum numbe of logs needed: %d\n", totalLogs);
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partitionDesc(int arr[], int low, int high) {
    int pivot = arr[high];   // choose last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {   // '>' for descending order
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSortDesc(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionDesc(arr, low, high);
        quickSortDesc(arr, low, pi - 1);
        quickSortDesc(arr, pi + 1, high);
    }
}