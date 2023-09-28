#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= n - i + 1; k++)
        {
            printf(" ");
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }
        for (int y = 2 * i - 2; y >= i; y--)
        {
            printf("%d", y);
        }
        printf("\n");
    }
}