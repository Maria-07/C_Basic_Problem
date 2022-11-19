#include <stdio.h>

int main()
{
    int t, n, x;
    scanf("%d", &x);
    while (x--)
    {
        scanf("%d %%", &n);
        if (n < 60)
        {
            t = (60 - n) + 40 + 60;
        }
        else if (n >= 60 && n < 80)
        {
            t = ((80 - n) * 2) + 60;
        }
        else if (n >= 80 && n <= 100)
        {
            t = (100 - n) * 3;
        }

        printf("%d minutes\n", t);
    }
    return 0;
}
