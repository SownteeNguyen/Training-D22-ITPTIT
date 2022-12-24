/*Description
Cho 2 số n,m.
Tráo đổi giá trị của 2 số
Lưu ý, sử dụng hàm con, con trỏ để tráo đổi. Nếu check code không đúng yêu cầu sẽ đánh sai và phải làm lại.

Input
2 số nguyên n, m. (0<= n, m <=10000)

Output
In ra 2 số n,m cách nhau 1 khoảng trắng sau khi tráo đổi*/

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    swap(&n, &m);
    printf("%d %d", n, m);
    return 0;
}