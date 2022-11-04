#include <stdio.h>

int main()
{
    int i = 0, arr[5];
    while (i < 5)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    i = 0;
    while (i < 5)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    printf("%d", max);
    return 0;
}