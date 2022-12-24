#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    long long sum;
    if ( n % 2 == 0) {
        sum = 1ll*(n+2)*((n-2)/2+1)/2;
    } else {
        sum = 1ll*(n+1)*((n-1)/2+1)/2;
    }
    if (sum % 2 == 0) {
        printf("0");
    } else {
        printf("1");
    }
}