#include <stdio.h>
int main()
{
    char letter;
    while(scanf("%c", &letter) != -1){
        if (letter >= 'C' && letter <= 'Z' ||
            letter >= 'c' && letter <= 'z')
        {
            printf("%c", letter - 2);
        }
        else if(letter == 'a')
        {
            printf("y");
        }
        else if(letter == 'A')
        {
            printf("Y");
        }
        else if(letter == 'b')
        {
            printf("z");
        }
        else if(letter == 'B')
        {
            printf("Z");
        }
        // else if(letter == 'y')
        // {
        //     printf("a");
        // }
        // else if(letter == 'Y')
        // {
        //     printf("A");
        // }
        // else if(letter == 'z')
        // {
        //     printf("b");
        // }
        // else if(letter == 'Z')
        // {
        //     printf("B");
        // }
        else
        {
            printf("%c", letter);
        }
    }
}