#include <stdio.h>
long long int arithmetic_progression(long long int A, long long int B)
{
    return (B - A + 1) * (A + B) / 2;
}
int main()
{
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld\n", arithmetic_progression(A, B));
    return 0;
}