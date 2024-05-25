#include <iostream>

using namespace std;

int main()
{
    unsigned int num1, num2;
    unsigned int out;
    while(cin >> num1 >> num2)
    {
        out = num1 ^ num2;
        printf("%u\n", out);
    }
    return 0;
}