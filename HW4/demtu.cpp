/*Đếm từ

Description
Một từ trong xâu ký tự được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống. Hãy đếm số từ của xâu và in kết quả ra màn hình

Input
Dòng đầu tiên chứa T bộ test (1 ≤ T ≤ 100).
Mỗi test gồm 1 dòng duy nhất chứa xâu nhập vào.

Output
T dòng, mỗi dòng in ra số lượng từ trong xâu*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1005];
        scanf("\n");
        gets(s);
        int n = strlen(s);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            // Kiểm tra khoảng trắng :v
            if (isspace(s[i]))
            {
                count++;
            }
        }
        printf("%d\n", count + 1);
    }
}