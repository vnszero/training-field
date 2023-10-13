#include <iostream>
#include <string>
using namespace std;
int main()
{
    int C;
    int i;
    string sentence;
    cin >> C;
    while (C > 0)
    {  
        cin >> sentence;
        for (i=sentence.length()-1; i>=0; i--)
        {
            if (sentence[i] > 90)
            { // its part of the message
                cout << sentence[i];
            }
        }
        cout << endl;
        C-=1;
    }
}