#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) printf("VUONG");
    else if (a + b <= c || a + c <= b || b + c <= a) printf("NO.");
    else if (a == b && b == c) printf("DEU");
    else if (a == b || a == c || b == c) printf("CAN");
    else printf("THUONG");
}