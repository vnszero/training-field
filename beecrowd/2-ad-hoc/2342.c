#include <stdio.h>
int main()
{
    int N;
    int P, Q;
    char O;
    int status;
    scanf("%d", &N);
    scanf("%d %c %d", &P, &O, &Q);
    if (O == '+')
    {
        if (N >= P + Q)
        {
            status = 1;
        }
        else
        {
            status = 0;
        }
    }
    else
    {
        if (N >= P * Q)
        {
            status = 1;
        }
        else
        {
            status = 0;
        }
    }
    printf(status ? "OK\n" : "OVERFLOW\n");    
    return 0;
}