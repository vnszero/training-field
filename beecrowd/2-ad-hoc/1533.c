#include <stdio.h>
int main()
{
    int N, V;
    int biggest, second_in_line;
    int biggest_position, second_in_line_position;
    do{
        scanf("%d", &N);
        biggest = 0; 
        second_in_line = 0;
        biggest_position = -1; 
        second_in_line_position = -1;
        for (int i = 0; i < N; i++)
        {
            scanf("%d ", &V);
            if (biggest_position == -1)
            {
                biggest = V;
                biggest_position = i + 1;
            }
            else if (biggest < V)
            {
                second_in_line = biggest;
                second_in_line_position = biggest_position;
                biggest = V;
                biggest_position = i + 1;
            }
            else if(second_in_line_position == -1 || second_in_line < V)
            {
                second_in_line = V;
                second_in_line_position = i + 1;
            }
        }
        if (N > 0){
            printf("%d\n", second_in_line_position);
        }
    } while(N > 0);
    return 0;
}