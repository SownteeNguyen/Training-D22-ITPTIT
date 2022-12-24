#include <stdio.h>
#include <math.h>

int main() {
    long long a, b; scanf("%lld %lld\n", &a, &b);
    long long c, d; scanf("%lld %lld\n", &c, &d);
    long long e, f; scanf("%lld %lld", &e, &f);
    // float canh1 = sqrtf( pow((float)a - c, 2) + pow(b - d, 2) );
    // float canh2 = sqrtf( pow((float)a - e, 2) + pow(b - f, 2) );
    // float canh3 = sqrtf( pow((float)c - e, 2) + pow(d - f, 2) );
    // float nuaChuVi = ( (float)canh1 + canh2 + canh3 ) / 2;
    double dienTich = 1.000 * (abs((c - a) * (f - b) - (e - a) * (d - b))) / 2;
    printf("%.3f", dienTich);
    return 0;
}