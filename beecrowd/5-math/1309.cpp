#include <deque>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string val;
    deque<char> out;
    int cents;
    while(cin >> val)
    {
        
        cin >> cents;
        int j = 0;
        for(int i = val.length() - 1; i >= 0; i--)
        {
            if (j % 3 == 0 && j != 0)
            {
                out.push_front(',');
            }
            out.push_front(val[i]);
            j++;
        }
        cout << "$";
        auto it = out.cbegin();
        while (it != out.cend()) {
            cout << *it;
            ++it;
        }
        out.clear();
        printf(".%02d\n", cents);
    }
    return 0;
}