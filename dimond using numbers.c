#include <stdio.h>

int main()
{
    int i, j, k;
     int n = 4;
    for(i = 0; i <= 4; i++)
    {
        for(j = 0; j <= 4 - i; j++)
            printf("  ");

        for(j = 4; j >= 4 - i; j--)
            printf("%d ", j);

        for(k = 5 - i; k <= 4; k++)
        { if (i!=0) {
            printf("%d ", k); }
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s <= i; s++)
           { printf("  "); }

        for (int j = n; j >= i; j--)
            printf("%d ", j);

        for (int j = i + 1; j <= n; j++)
            printf("%d ", j);

        printf("\n");
    }
    return 0;
}