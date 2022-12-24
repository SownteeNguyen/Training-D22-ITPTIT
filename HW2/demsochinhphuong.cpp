#include <stdio.h>
#include <math.h>

int kiemTraSoChinhPhuong(int h)
{
    int k = sqrt(h);
    if (k * k == h)
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        if (b < a)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int i = a; i <= b; i++)
        {
            if (kiemTraSoChinhPhuong(i))
                ++count;
        }
        printf("%d\n", count);
    }
}