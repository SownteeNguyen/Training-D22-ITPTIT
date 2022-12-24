#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    long long sum = 1ll*(n+1)*((n-1)/2+1)/2 ;
    printf("%lld", sum);
    return 0;
}