/*Rút gọn xâu

Description
SharkD có 1 xâu kí tự, trong xâu có rất nhiều kí tự giống nhau đứng cạnh nhau. Do lười chép nên nếu có nhiều kí tự giống nhau đứng cạnh nhau, anh sẽ thu gọn bằng cách chỉ ghi 1 kí tự, sau đó sẽ ghi số các số kí tự giống nhau đứng cạnh nhau đó.

Sau khi làm xong, anh ấy không biết dãy mình rút gọn đã đúng chưa.

Các bạn hãy thử in ra dãy rút gọn để anh SharkD của chúng ta so sánh nhé.

(Xâu có không quá 1000 kí tự)

Input
Dòng đầu tiên chứa số lượng bộ test T (T<=100).
Mỗi test gồm 1 xâu kí tự.

Output
T dòng, in ra xâu đã rút gọn.*/

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
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            while (s[i] == s[i + 1])
            {
                count++;
                i++;
            }
            printf("%c", s[i]);
            if (count > 1)
            {
                printf("%d", count);
            }
        }
        printf("\n");
    }
}