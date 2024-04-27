#include <stdio.h>
#include <string.h>

#define VOWEL_WORD 0
#define CONSONANT_WORD 1
#define FALSE 0
#define TRUE 1

int main()
{
    int break_row = FALSE;
    int state = VOWEL_WORD;
    int word_change = TRUE;

    char key[100000];
    scanf("%s", key);
    int key_size = strlen(key);
    int key_index = 0;
    int N;
    scanf("%d", &N);

    char letter;
    for (int i = 0; i < N; i++)
    {
        // clear buffer
        getchar();
        while((letter = getchar()) != -1)
        {
            if (word_change)
            {
                if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
                {
                    state = VOWEL_WORD;
                }
                else
                {
                    state = CONSONANT_WORD;
                }
                word_change = FALSE;
            }

            if (letter == ' ')
            {
                word_change = TRUE;
                printf("%c", letter);
            }
            else if(letter == '\n')
            {
                word_change = TRUE;
                printf("%c", letter);
                key_index = 0;
            } 
            else
            {
                if (state == VOWEL_WORD)
                {
                    printf("%c", letter);
                }
                else
                {
                    printf("%c", ((letter - 'a' + key[key_index % key_size] - 'a') % 26) + 'a');
                    key_index++;
                }
            }
        }
    }
    return 0;
}
