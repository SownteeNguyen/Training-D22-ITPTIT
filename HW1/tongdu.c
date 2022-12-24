#include <stdio.h>

int main() {
    // int x; scanf("%d", &x);
    // while (x--) {
        unsigned int a, N;
        int sum = 0;
        scanf("%d%d", &a, &N);
        for (int i = 1; i <= a; i++)
        {
            sum += i%N;
        }
        if (sum == N) {
            printf("1");
        } else {
            printf("0");
        }
    // }
    return 0;
}