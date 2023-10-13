#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    int i;
    int state = 0;
    char first_letter = '1';
    char already_counted_letter;
    int counter;
    while (getline(cin, sentence))
    {
        counter = 0;
        for(i=0; sentence[i]!='\0'; i++)
        {
            switch (state)
            {
            case 0:
                first_letter = tolower(sentence[i]);
                state++;
                break;
            case 1:
                if (sentence[i] == ' ')
                {
                    state++;
                }
                break;
            case 2:
                if (first_letter == tolower(sentence[i]))
                { // plus counter
                    if (already_counted_letter != first_letter)
                    {
                        counter++;
                        already_counted_letter = first_letter;
                    }
                    state--;
                }
                else
                {
                    first_letter = tolower(sentence[i]);
                    already_counted_letter = '1';
                    state--;
                }
                break;
            }
        }
        cout << counter << endl;
        state = 0;
    }
}