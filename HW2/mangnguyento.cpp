#include <stdio.h>
int kiemTraSoNguyenTo(int h)
{
    int k = 0;
    if (h < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= h; i++)
    {
        if (h % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        int sum = 0;
        int temp = 0;
        scanf("%d", &n);
        int arr[1000];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (kiemTraSoNguyenTo(arr[i]))
            {
                ++sum;
            }
            temp += arr[i];
        }
        if (kiemTraSoNguyenTo(sum) && kiemTraSoNguyenTo(temp))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}