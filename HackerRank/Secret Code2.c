#include <stdio.h>
int main()
{
    int t, n, prime;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        prime = 1;
        if (n == 0 || n == 1)
            prime = 0;
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i != 0)
                {
                    continue;
                }
                else
                {
                    prime = 0;
                }
                break;
            }
        }

        if (prime == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}