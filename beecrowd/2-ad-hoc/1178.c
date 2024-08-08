#include <stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n", i, N);
        N /= 2;
    }
}