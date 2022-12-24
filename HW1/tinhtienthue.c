#include <stdio.h>

void laiCheck( int tienThue ) {
    if ( tienThue% 100 == 0 ) printf("%d", tienThue / 100);
    if ( tienThue % 100 != 0 && ( tienThue % 100 ) % 10 == 0 ) printf("%.1f", (float)tienThue / 100);
    if ( tienThue % 100 != 0 && ( tienThue % 100 ) % 10 != 0 ) printf("%.2f", (float)tienThue / 100);
}

int main() {
    int tienThue;
    scanf("%d", &tienThue);
    if ( tienThue < 10 ) {
        laiCheck(tienThue);
    } else if ( 10 <= tienThue && tienThue < 20 ) {
        laiCheck(tienThue * 3 );
    } else {
        laiCheck(tienThue * 5);
    }
    return 0;
}