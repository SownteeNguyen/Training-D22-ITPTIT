#include <stdio.h>
// tìm phần tử lớn nhất mảng 2 chiều và tìm phần tử đó
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int mangDanhDau[100005] = {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            mangDanhDau[arr[i][j]]++;
        }
    }
    // Tìm phẩn tự lớn nhất trong mảng đánh dấu
    int max = mangDanhDau[0];
    int idx = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mangDanhDau[arr[i][j]] > max)
            {
                max = mangDanhDau[arr[i][j]];
                idx = arr[i][j];
            }
            else if (mangDanhDau[arr[i][j]] == max)
            {
                if (arr[i][j] > idx)
                {
                    idx = arr[i][j];
                }
            }
        }
    }

    printf("%d ", max);
    printf("%d", idx);
}
