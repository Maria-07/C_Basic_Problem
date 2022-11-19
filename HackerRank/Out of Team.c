#include <stdio.h>

int main()
{
    int n, k, out = 0;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < k)
        {
            out += 1;
        }
    }
    printf("%d\n", out);

    return 0;
}