#include <stdio.h>

int main() {
    float toan, van, anh;
    scanf("%f%f%f", &toan, &van, &anh);
    float diemTB = ( toan + van + anh) / 3;
    if (diemTB < 5 ) {
        printf("yeu");
    } else if ( 5 <= diemTB && diemTB < 6.5) { 
        printf("trung binh");
    } else if ( 6.5 <= diemTB && diemTB < 8 ){
        printf("kha");
    } else {
        printf("gioi");
    }
}