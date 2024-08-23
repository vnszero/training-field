#include <stdio.h>
int main()
{
    int diameter;
    int height, width, depth;
    scanf("%d", &diameter);
    scanf("%d %d %d", &height, &width, &depth);
    if (diameter > height || diameter > width || diameter > depth)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    return 0;
}