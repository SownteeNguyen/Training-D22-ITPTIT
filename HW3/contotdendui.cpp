/*Cho một bàn cờ là một ma trận vuông N * N (không nhất thiết là 64 ô, 1 < N < 101). Trên bàn cờ chỉ có 2 loại quân là quân tốt và quân xe. Quân tốt có 1 con và được kí hiệu là “0”, quân xe có từ 0 đến n * (n-1) con được kí hiệu là “1”, ô không có quân được kí hiệu là “2”. Nhiệm vụ của PP là xem quân tốt có thể bị ăn ngay trong lượt đi tiếp theo của các quân xe hay không(luật đi của con xe là luật cờ vua bình thường). Bạn hãy giúp PP nhé!

Input
Dòng đầu tiên nhập N là số hàng và số cột của ma trận.( 1 ≤ n ≤ 100).

N dòng tiếp theo mỗi dòng nhập các kí hiệu của N quân trên 1 hàng, mỗi quân cách nhau một khoảng trắng.

Output
In ra “Yes” nếu quân tốt bị ăn, in ra “No” nếu quân tốt không bị ăn.*/

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
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (a[i][k] == 1)
                    {
                        x = 1;
                    }
                }
                for (int k = 0; k < n; k++)
                {
                    if (a[k][j] == 1)
                    {
                        x = 1;
                    }
                }
            }
        }
    }
    if (x == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}