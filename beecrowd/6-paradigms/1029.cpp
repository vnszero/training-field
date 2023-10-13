#include <iostream>
using namespace std;
int fibonacci(int X, int *calls);
int main()
{
    int N, X;
    int calls;
    int fib;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> X;
        calls = 0;
        fib = fibonacci(X, &calls);
        cout << "fib(" << X << ") = " << calls << " calls = " << fib << endl;
    }
    return 0;
}
int fibonacci(int X, int *calls)
{
    if(X == 0)
    {
        return 0;
    }
    else if(X == 1)
    {
        return 1;
    }
    *calls = *calls + 2;
    return (fibonacci(X-2, calls) + fibonacci(X-1, calls));
}