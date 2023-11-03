#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 36000
void show_result(int *result, int size);
int result_x_current_and_resize(int *result, int size, int current);
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
    { // 0 and 1
        printf("1\n");
    }
    else
    { // 2+
        int *result = calloc(MAX_SIZE, sizeof(int));
        int size = 1;
        result[0] = 2; // ready to print N=2
        for (int current = n; current > 2; current--)
        { // N * N-1 * N-2 * N-3 ... * 3
            size = result_x_current_and_resize(result, size, current);
        }
        show_result(result, size);
        free(result);
    }
    return 0;
}
void show_result(int *result, int size)
{ // the zero position keeps the least significant digit
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }
    printf("\n");
}
int result_x_current_and_resize(int *result, int size, int current)
{ // returns the new size for result pointer
    int carry = 0;
    int aux;
    for (int index = 0; index < size; index++)
    { // loop over result to recalculate and find carries
        aux = result[index]*current + carry;
        result[index] = aux % 10;
        carry = aux / 10;
    }
    while (carry > 0)
    { // resize and solve missing carry in the end
        result[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}