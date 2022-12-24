#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("%d\n");
        // dem++;
    }
}