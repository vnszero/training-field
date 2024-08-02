#include <stdio.h>
#include <string.h>

int ceasar(char sentence[], int shift, int all_simbol, int start);
void revert(char sentence[], int size);

int main()
{
    int N, M, size;
    char sentence[1001];

    scanf("%d ", &N);
    while (N)
    {
        fgets(sentence, sizeof(sentence), stdin);
        size = ceasar(sentence, 3, 0, 0);
        revert(sentence, size);
        ceasar(sentence, -1, 1, size / 2);
        printf("%s", sentence);
        N--;
    }
    return 0;
}

int ceasar(char sentence[], int shift, int all_simbol, int start)
{
    int i;
    for (i = start; sentence[i] != '\0' && sentence[i] != '\n'; i++)
    {
        if (all_simbol || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z'))
        {
            sentence[i] += shift;
        }
    }
    return i;
}

void revert(char string[], int size)
{
    for (int j = 0; j < size / 2; j++)
    {
        string[j] ^= string[size - 1 - j];
        string[size - 1 - j] ^= string[j];
        string[j] ^= string[size - 1 - j];
    }
}