#include <stdio.h>

int testNamNhuan(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return 1;
    return 0;
}

int main() {
    int nam;
    scanf("%d", &nam);
    if ( testNamNhuan(nam) == 1 ) {
        printf("YES");
    } else {
        printf("NO");
    }
}