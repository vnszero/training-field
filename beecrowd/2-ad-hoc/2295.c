#include <stdio.h>
int main()
{
    float A, G, Ra, Rg;
    scanf("%f %f %f %f ", &A, &G, &Ra, &Rg);
    if (Rg/G >= Ra/A)
    {
        printf("G\n");
    }
    else
    {
        printf("A\n");
    }
}