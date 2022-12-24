#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a, b, tg;
        scanf("%d%d", &a, &b);
        while (b != 0)
        {
            tg = a % b;
            a = b;
            b = tg;
        }
        printf("%d\n", a);
    }
}