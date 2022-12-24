/*Xoá ký tự

Description
Cho 1 xâu kí tự, hãy nhập vào một kí tự muốn xóa trong xâu sau đó in ra xâu sau khi được xóa.

Input
Dòng đầu tiên chứa T bộ test (1 ≤ T ≤ 100).
Mỗi test gồm 2 dòng tiếp theo:
Dòng 1 chứa xâu cần xóa kí tự.
Dòng 2 chứa 1 kí tự cần xóa.

Output
T dòng, mỗi dòng in ra xâu sau khi được loại bỏ kí tự nhập vào.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
    	scanf("\n");
        char s[1001];
        gets(s);
        char c;
        scanf("%c", &c);
        int n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
