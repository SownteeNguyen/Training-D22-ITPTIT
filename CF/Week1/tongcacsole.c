#include <stdio.h>

int main() {
    long long a, b;
    long long temp;
    scanf("%lld %lld", &a, &b);
    if ( a > b )  {
        temp = a;
        a = b;
        b = temp;
    }
    if ( a % 2 == 0 && b % 2 == 0 ) {
        long long sum = ( ( ( b - 1 ) + ( a + 1 ) ) * ( ( ( b - 1) - ( a + 1 ) ) / 2 + 1 ) ) / 2;
        printf("%lld\n", sum);
    } else if ( a % 2 == 0 && b % 2 != 0) {
        long long sum = ( ( b + ( a + 1 ) ) * ( ( b - ( a + 1 ) ) / 2 + 1 ) ) / 2;
        printf("%lld\n", sum);
    } else if ( a % 2 != 0 && b % 2 == 0) {
        long long sum = ( ( ( b - 1 ) + a ) * ( ( ( b - 1) - a ) / 2 + 1 ) ) / 2;
        printf("%lld\n", sum);
    } else {
        long long sum = ( ( b + a ) * ( ( b - a ) / 2 + 1 ) ) / 2;
        printf("%lld\n", sum);
    }
}