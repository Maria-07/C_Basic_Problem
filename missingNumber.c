#include <stdio.h>

int main()
{
    int n, x, arr[200001], i = 1;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &x);
        arr[x] = 1;
        i++;
    }
    i = 1;
    while (i < n)
    {
        printf("%d -> %d\n", i, arr[i]);
        i++;
    }

    return 0;
}