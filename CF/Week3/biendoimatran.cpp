/* Cho ma trận nhị phân a (Chỉ gồm các phần tử 0 và 1). Nhiệm vụ của bạn là in ra ma trận a sau khi biến đổi theo quy tắc: Nếu phần tử a[i][j] = 1 thì ta biến đổi tất cả các phần tử ở hàng i cột j thành 1. */

/*
Input:
2
2 3
0 0 0
0 0 1
3 4
1 0 0 1
0 0 1 0
0 0 0 0
*/
/*
Output:
Test: 1
0 0 1
1 1 1
Test: 2
1 1 1 1
1 1 1 1
1 0 1 1
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int a = 1;
    while (x--)
    {
        printf("Test %d:\n", a++);
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    for (int k = 0; k < m; k++)
                    {
                        a[i][k] = 1;
                    }
                    for (int k = 0; k < n; k++)
                    {
                        a[k][j] = 1;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}