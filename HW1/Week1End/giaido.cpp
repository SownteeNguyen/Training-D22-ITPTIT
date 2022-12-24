#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    int max1 = fmax(x1, x2), max2 = fmax(max1, x3), max3 = fmax(max2, x4);
    int min1 = fmin(x1, x2), min2 = fmin(min1, x3), min3 = fmin(min2, x4);
    int lonNhat1 = fmax(y1, y2), lonNhat2 = fmax(lonNhat1, y3), lonNhat3 = fmax(lonNhat2, y4);
    int beNhat1 = fmin(y1, y2), beNhat2 = fmin(beNhat1, y3), beNhat3 = fmin(beNhat2, y4);
    int check = max3 - min3, check1 = lonNhat3 - beNhat3;
    int canh = fmax(check, check1);
    int dienTich = canh * canh;
    printf("%d\n", dienTich);
    if (dienTich % 2 == 0)
        printf("hoa hong");
    else
        printf("go huong");
}