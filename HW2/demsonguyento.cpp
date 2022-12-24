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
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (kiemTraSoNguyenTo(i))
            {
                ++count;
            }
        }
        printf("%d\n", count);
    }
}