#include <iostream>
#define CUPS 4
using namespace std;
int main()
{
    bool cups[CUPS];
    cin >> cups[0] >> cups[1] >> cups[2] >> cups[3];
    for (int i=0; i<CUPS; i++)
    {
        if (cups[i] == true)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}