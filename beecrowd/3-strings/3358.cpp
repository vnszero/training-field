#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string name;
    int miss_vowel;
    bool hard;
    for (int i=0; i<N; i++)
    {
        miss_vowel = 0;
        hard = false;
        cin >> name;
        for (int j=0; j<name.length(); j++)
        {
            if (name[j] == 'a' || name[j] == 'e' || name[j] == 'i' || name[j] == 'o' || name[j] == 'u' ||
                name[j] == 'A' || name[j] == 'E' || name[j] == 'I' || name[j] == 'O' || name[j] == 'U')
            { // vowel
                miss_vowel = 0;
            }
            else
            { // consonant
                miss_vowel++;
            }

            if (miss_vowel > 2)
            {
                hard = true;
            }
        }
        if (hard)
        {
            cout << name << " nao eh facil" << endl;
        }
        else
        {
            cout << name << " eh facil" << endl;
        }
    }
    return 0;
}