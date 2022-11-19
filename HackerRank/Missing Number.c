#include <stdio.h>

int main()
{
    long long int S, A, B, C, T;
    scanf("%lld\n", &T);

    while (T--)
    {
        scanf("%lld%lld%lld%lld", &S, &A, &B, &C);
        printf("%lld\n", S - (A + B + C));
    }

    return 0;
}