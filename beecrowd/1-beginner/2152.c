#include <stdio.h>

int main()
{
    int N;
    int H, M, O;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &H, &M, &O);
        if (O == 0)
        {
            printf("%02d:%02d - A porta fechou!\n", H, M);
        }
        else
        {
            printf("%02d:%02d - A porta abriu!\n", H, M);
        }
    }
    return 0;
}