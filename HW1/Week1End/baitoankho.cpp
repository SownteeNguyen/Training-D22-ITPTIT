#include <stdio.h>
#include <math.h>

int main()
{
    long long N;
    scanf("%lld", &N);
    long long check, sum;
    check = N % 10;
    N = N / 10;
    if (check >= 8)
        sum = 1 * (N + 1) + 3 * (N + 1) + 6 * (N + 1) + 8 * (N + 1);
    else if (check >= 6)
        sum = 1 * (N + 1) + 3 * (N + 1) + 6 * (N + 1) + 8 * N;
    else if (check >= 3)
        sum = 1 * (N + 1) + 3 * (N + 1) + 6 * N + 8 * N;
    else if (check >= 1)
        sum = 1 * (N + 1) + 3 * N + 6 * N + 8 * N;
    else
        sum = 1 * N + 3 * N + 6 * N + 8 * N;
    printf("%lld", sum);
    return 0;
}