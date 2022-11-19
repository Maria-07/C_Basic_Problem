#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], g;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &g);
    int girl[g], boys[n - g];
    for (int i = 0; i < g; i++)
    {
        girl[i] = arr[i];
    }
    int z = 0;
    for (int i = g; i < n; i++)
    {
        boys[z] = arr[i];
        z++;
    }
    for (int i = 0; i < z; i++)
    {
        printf("%d ", boys[i]);
    }
    for (int i = 0; i < g; i++)
    {
        printf("%d ", girl[i]);
    }
    printf("\n");
    return 0;
}