#include <bits/stdc++.h>
using namespace std;
string word_handler(string bigger_word, string smaller_word, bool order);
int main()
{
    int N;
    string first_word, second_word;
    string output;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        output = "";
        cin >> first_word >> second_word;
        if (first_word.length() > second_word.length())
        {
            output += word_handler(first_word, second_word, true);
        }
        else
        {
            output += word_handler(second_word, first_word, false);
        }
        cout << output << endl;
    }    
    return 0;
}
string word_handler(string bigger_word, string smaller_word, bool order)
{
    string output = "";
    int j;
    if (order)
    { // bigger word is first word
        for (j=0; j<smaller_word.length(); j++)
        {
            output += bigger_word[j];
            output += smaller_word[j];
        }
    }
    else
    { // smaller word is first word
        for (j=0; j<smaller_word.length(); j++)
        {
            output += smaller_word[j];
            output += bigger_word[j];
        }
    }
    // recover final part
    for (;j<bigger_word.length();j++)
    {
        output += bigger_word[j];
    }
    return output;
}