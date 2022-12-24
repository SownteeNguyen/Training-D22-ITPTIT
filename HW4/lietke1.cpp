/*Liệt kê 1

Description
Cho 1 xâu kí tự, in ra kí tự xuất hiện nhiều lần trong xâu và số lần xuất hiện của kí tự đó.
Nếu có nhiều kí tự thỏa mãn, in ra theo thứ tự từ điển.
(Xâu có không quá 1000 kí tự)

Input
Dòng đầu tiên chứa số lượng bộ test T (T<=100).
Mỗi test gồm 1 xâu kí tự.

Output
In ra các kí tự và số lần xuất hiện của thỏa mãn, với mỗi kí tự thỏa mãn, in ra trên 1 dòng. Nếu không tìm được, in ra -1;*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1001];
        scanf("%s", s);
        int n = strlen(s);
        int mangDanhDau[1000] = {};
        for (int i = 0; i < n; i++)
        {
            mangDanhDau[s[i]]++;
        }
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (mangDanhDau[s[i]] > 1)
            {
                check = 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mangDanhDau[s[i]] > 1)
            {
                printf("%c %d\n", s[i], mangDanhDau[s[i]]);
                mangDanhDau[s[i]] = 0;
            }
        }
        if (check == 0)
        {
            printf("-1\n");
        }
    }
}
