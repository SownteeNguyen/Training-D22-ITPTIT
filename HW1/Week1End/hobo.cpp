#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double check = (double)(a + b + c + d) / 4;
    double GPA = (double)(round(check * 10)) / 10;
    printf("%.1lf\n", GPA);
    if (GPA >= 3.6)
    {
        printf("Xuat sac");
    }
    else if (GPA >= 3.2)
    {
        printf("Gioi");
    }
    else if (GPA >= 2.8)
    {
        printf("Kha");
    }
    else
    {
        printf("Tach mat roi'");
    }
}