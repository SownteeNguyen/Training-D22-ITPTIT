#include <stdio.h>
#include <math.h>
 
int main() {
    long long a, b; scanf("%lld %lld\n", &a, &b);
    long long c, d; scanf("%lld %lld\n", &c, &d);
    long long e, f; scanf("%lld %lld", &e, &f);
    double canh1 = sqrt( pow(a - c, 2) + pow(b - d, 2) );
    double canh2 = sqrt( pow(a - e, 2) + pow(b - f, 2) );
    double canh3 = sqrt( pow(c - e, 2) + pow(d - f, 2) );
    if ( canh1 + canh2 <= canh3 || canh1 + canh3 <= canh2 || canh2 + canh3 <= canh1 ) {
        printf("INVALID");
    } else {
        double nuaChuVi = ( (double)canh1 + canh2 + canh3 ) / 2;
        double dienTich = 1.000 * sqrt( nuaChuVi * (nuaChuVi - canh1) * (nuaChuVi - canh2) * (nuaChuVi - canh3) );
        printf("%.3lf", dienTich);
    }
    return 0;
}