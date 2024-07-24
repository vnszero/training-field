#include <stdio.h>
int main()
{
    int connector[2][5];
    int condition = 1;

    // get input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d ", &connector[i][j]);
        }
    }

    // check plugs
    for (int j = 0; j < 5; j++)
    {
        if (connector[0][j] == connector[1][j])
        {
            condition = 0;
            break;
        }
    }

    // output
    if (condition)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}