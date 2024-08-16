#include <iostream>
using namespace std;
unsigned long long int factorial(int n);
int main()
{
    int N, M;
    unsigned long long int sum;
    while(cin >> N >> M)
    {
        sum = factorial(N);
        sum += factorial(M);
        cout << sum << endl;
    }
    return 0;
}
unsigned long long int factorial(int n){
    unsigned long long int out = 1;
    for (int i = n; i > 0; i--)
    {
        out *= i;
    }
    return out;
}
