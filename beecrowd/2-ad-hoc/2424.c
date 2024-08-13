#include <stdio.h>
int main()
{
    int x, y;
    int condition = 0;
    scanf("%d %d", &x, &y);
    if (x >= 0 && x <= 432)
    {
        if (y >= 0 && y <= 468)
        {
            condition = 1;
        }
    }

    if (condition)
    {
        printf("dentro\n");
    }
    else
    {
        printf("fora\n");
    }
}