#include <stdio.h>
int main()
{
    char c;
    int machine = 0;
    while(scanf("%c", &c) != -1)
    {
        if (machine == 0)
        {
            if (c == ' ')
            {
                printf("%c", c);
            }
            else
            {
                machine = 1;
            }
        }
        else
        {
            printf("%c", c);
            machine = 0;
        }
    }
    printf("\n");
}