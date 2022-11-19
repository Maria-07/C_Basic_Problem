#include <stdio.h>

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    int arr[n], arr2[n];
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    i = 0;
    while (i < n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        arr2[i] = max - arr[i];
        printf("%d ", arr2[i]);
        i++;
    }
    return 0;
}