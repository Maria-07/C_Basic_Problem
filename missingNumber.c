#include <stdio.h>

int main()
{
    int n, x, arr[200001], i = 1, m, sum = 0;
    scanf("%d", &n);
    while (i <= 3)
    {
        scanf("%d", &x);
        arr[x] = 1;
        i++;
        sum += x;
    }
    i = 1;
    while (i <= 4)
    {
        // printf("%d -> %d\n", i, arr[i]);
        if (arr[i] == 0)
        {
            m = i;
        }
        i++;
    }
    printf("%d", m);
    printf("%d =", sum + m);

    return 0;
}