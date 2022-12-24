#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n][n];
    //    int arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
}
