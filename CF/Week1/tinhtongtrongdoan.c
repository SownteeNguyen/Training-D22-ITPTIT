#include <stdio.h>

int main() {
    long long a, b;
    long long temp;
    scanf("%lld%lld", &a, &b);
    if ( a > b )  {
        temp = a;
        a = b;
        b = temp;
    }
    long long sum = ( ( b + a ) * ( ( b - a ) + 1 ) ) / 2;
    printf("%lld", sum);
}