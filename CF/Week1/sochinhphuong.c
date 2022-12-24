#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("1");
            return 0;
        }
        ++i;
    }
    printf("0");
}