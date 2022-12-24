#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    float canh1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float canh2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float canh3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if (canh1 > canh2 && canh1 > canh3)
    {
        int x4, y4;
        x4 = x1 + x2 - x3;
        y4 = y1 + y2 - y3;
        printf("%d %d", x4, y4);
    }
    else if (canh2 > canh3 && canh2 > canh1)
    {
        int x4, y4;
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
        printf("%d %d", x4, y4);
    }
    else
    {
        int x4, y4;
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
        printf("%d %d", x4, y4);
    }
}