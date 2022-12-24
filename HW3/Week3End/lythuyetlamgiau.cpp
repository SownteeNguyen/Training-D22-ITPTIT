/*Tìm số Fibonacci lớn nhất trên dãy số đấy trong khoảng mà D yêu cầu.*/
/*
Input
Dòng đầu tiên chứa số nguyên NN (NN không quá 100) là số phần tử của mảng AA là dãy số ngẫu nhiên mà D tạo ra.
Dòng tiếp theo đưa vào NN phần tử A[i]A[i] (0 ≤ A[i] ≤ 10^18) - tương ứng là số thứ i trên dãy số ngẫu nhiên mà D tạo ra.
Dòng tiếp theo nhập số nguyên Q câu hỏi (1 ≤ Q < 100).
QQ dòng tiếp theo đưa vào QQ câu hỏi, mỗi câu hỏi là một bộ đôi 2 số LL, RR. (1 ≤ L ≤ R ≤ N)


Output
Đưa ra kết quả của mỗi câu hỏi QQ theo từng dòng.

Xác định số Fibonacci lớn nhất trong khoảng [L, R][L,R] trên dãy số đã cho. Nếu không có kết quả thì in ra “-1”.
*/

#include <stdio.h>

long long fb(long long n)
{
    if (n == 1 || n == 0 || n == 2 || n == 3)
        return n;
    return fb(n - 2) + fb(n - 1);
}
int main()
{
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    int Q;
    scanf("%d", &Q);
    while (Q--)
    {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        long long max = -1;
        for (long long i = L - 1; i < R; i++)
        {
            long long j = 0;
            while (fb(j) <= a[i])
            {
                if (fb(j) == a[i])
                {
                    if (max < a[i])
                        max = a[i];
                }
                j++;
            }
        }
        printf("%lld", max);
        printf("\n");
        if (max == -1)
            printf("-1");
    }
}