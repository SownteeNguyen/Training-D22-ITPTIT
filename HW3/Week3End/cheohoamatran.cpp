/*chéo hóa ma trận: phần tử ở ô nằm trên đường chéo trên xuống dưới, trái sang phải, sẽ bằng tổng của chính nó và các phần tử ở các ô cùng hàng, cùng cột, nằm dưới và nằm ngang với nó. Các ô này sau khi chéo hóa sẽ chỉ còn giá trị là 0.
 */
/*Input :
3
1 2 3
4 5 6
7 8 9
*/
/*Output :
17 0 0
0 19 0
0 0 9
*/
/*
Note:
1 + 2 + 3 + 4 + 7 = 17
5 + 6 + 8 = 19
9 = 9
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                long long sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += a[i][k];
                    sum += a[k][j];
                }
                sum -= a[i][j];
                printf("%lld ", sum);
            }
            else
            {
                a[i][j] = 0;
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("VlETNAM vo dich!!");
}