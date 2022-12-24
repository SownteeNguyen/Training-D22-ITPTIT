/*Cộng 2 số nguyên lớn

Description
Cho 2 số nguyên rất lớn, được biểu diễn bằng 2 xâu kí tự.
Tìm tổng của 2 số nguyên đó.
(Xâu có không quá 1000 kí tự)

Input
Dòng đầu tiên chứa số lượng bộ test T (T<=100).
Mỗi test gồm 2 xâu biểu diễn 2 số nguyên lớn.

Output
In tổng của 2 số nguyên lớn trên mỗi dòng.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s1[1001], s2[1001];
        scanf("%s%s", s1, s2);
        int n1 = strlen(s1), n2 = strlen(s2);
        int n = n1 > n2 ? n1 : n2;
        int a[1001] = {0}, b[1001] = {0}, c[1001] = {0};
        for (int i = 0; i < n1; i++)
        {
            a[i] = s1[n1 - i - 1] - '0';
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = s2[n2 - i - 1] - '0';
        }
        for (int i = 0; i < n; i++)
        {
            c[i] += a[i] + b[i];
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
        if (c[n] > 0)
        {
            n++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d", c[i]);
        }
        printf("\n");
    }
}