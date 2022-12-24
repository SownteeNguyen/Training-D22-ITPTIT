#include <stdio.h>
#include <math.h>

int n;

int soNguyenTo(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (soNguyenTo(i))
        {
            printf("%d ", i * i);
        }
    }
}