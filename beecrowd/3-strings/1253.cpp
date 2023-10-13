#include <iostream>
using namespace std;
int main(){
    int N, F;
    string io;
    char code;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> io;
        cin >> F;
        for (int j=0; j<io.size(); j++)
        {
            if (io[j]-F < 65)
            {
                code = io[j] - F + 26;
            }
            else
            {
                code = io[j] - F;
            }
            printf("%c",code);
        }
        printf("\n");
    }
}