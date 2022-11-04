#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int m = 0; m < n; m++)
    {
        for (int i = 0; i < arr[m]; i++)
        {
            for (int j = 0; j < arr[m]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}