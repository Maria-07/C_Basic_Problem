#include <stdio.h>
int main()
{
    int prime, N, j, i;
    scanf("%d", &N); // 3
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < N; j++)
    {
        prime = 1;
        if (arr[j] == 0 || arr[j] == 1)
        {
            prime = 0;
        }
        else
        {
            for (i = 2; i < arr[j]; i++)
            {
                if (arr[j] % i == 0)
                {
                    prime = 0;
                    break;
                }
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