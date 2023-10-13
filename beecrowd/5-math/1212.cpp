#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    int current_A, current_B;
    int carry;
    int next_carry;
    cin >> A >> B;
    while(A!=0 || B!=0)
    {
        carry = 0;
        next_carry = 0;
        while(A!=0 || B!=0)
        {
            current_A = A%10;
            current_B = B%10;
            A /= 10;
            B /= 10;
            if (current_A + current_B + next_carry > 9)
            {
                next_carry = (current_A + current_B + next_carry)/10;
                carry++;
            }
            else
            {
                next_carry = 0;
            }
        }
        
        if (carry > 1)
        {
            cout << carry << " carry operations." << endl;
        }
        else if (carry == 1)
        {
            cout << carry << " carry operation." << endl;            
        }
        else
        {
            cout << "No carry operation." << endl;
        }

        cin >> A >> B;
    }
    return 0;
}