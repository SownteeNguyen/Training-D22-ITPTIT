#include <stdio.h>
#include <math.h>

int main()
{
    int s, x1, x2, t1, t2, c, d;
    scanf("%d%d%d%d%d%d%d", &s, &x1, &x2, &t1, &t2, &c, &d);
    // thoi gian di bo
    int thoiGianDiBo = (x2 - x1) * t2;
    if (thoiGianDiBo < 0)
    {
        thoiGianDiBo = -thoiGianDiBo;
    }
    // thoi gian di tau
    int thoiGianDiTau;
    if (x1 > x2)
    {
        if (d == 0)
        {
            if (c >= x1)
            {
                thoiGianDiTau = (c - x2) * t1;
            }
            else
            {
                thoiGianDiTau = (c + 2 * s - x2) * t1;
            }
        }
        else
        {
            thoiGianDiTau = (2 * s - x2 - c) * t1;
        }
    }
    else if (x1 < x2)
    {
        if (d == 1)
        {
            if (c <= x1)
            {
                thoiGianDiTau = (x2 - c) * t1;
            }
            else
            {
                thoiGianDiTau = (2 * s - c + x2) * t1;
            }
        }
        else
        {
            thoiGianDiTau = (x2 + c) * t1;
        }
    }
    else
    {
        thoiGianDiTau = 100000;
    }
    // so sanh
    if (thoiGianDiBo < thoiGianDiTau)
    {
        printf("%d", thoiGianDiBo);
    }
    else
    {
        printf("%d", thoiGianDiTau);
    }
}