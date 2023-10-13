#include <bits/stdc++.h>
#define LETTER_a 97
#define CASE_CHANGE 32
#define ALPHA 26
using namespace std;
void clearBuffer() {
	char c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}
int main()
{
    int N;
    int letters_frequency[ALPHA];
    int most_wanted;
    char letter;
    string row;
    cin >> N;
    clearBuffer();
    for (int k=0; k<N; k++)
    {
        most_wanted = -1;
        row = "";
        do {
            letter = getchar();
            if(letter != '\n' && letter != '\r' && letter != EOF)
            {
                row += letter;
            }
        } while (letter != '\n' && letter != EOF);

        for (int j=0; j<ALPHA; j++)
        {
            letters_frequency[j] = 0;
        }

        for (int i=0; i<row.length(); i++)
        {
            // recover row
            letter = row[i];

            // count letters
            if (letter >= 'a' && letter <= 'z')
            { // valid letter 
            }
            else if (letter >= 'A' && letter <= 'Z')
            {
                letter += CASE_CHANGE;
            }
            else
            {
                // garbage
                continue;
            }

            // sum
            letters_frequency[letter - LETTER_a]++;

            // check the most wanted letter
            if (most_wanted < letters_frequency[letter - LETTER_a])
            {
                most_wanted = letters_frequency[letter - LETTER_a];
            }
        }
        for (int j=0; j<ALPHA; j++)
        {
            // cout << letters_frequency[j]; 
            if (letters_frequency[j] == most_wanted)
            {
                letter = j + LETTER_a;
                cout << letter;                
            }
        }
        cout << endl;
    }
        
    return 0;
}