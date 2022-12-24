#include <stdio.h>
 
int main ()
{
    int A, B, V;
    scanf("%d%d%d", &A, &B, &V);
    if (A==V) printf("1");
    else
    {
        if ((V-B)%(A-B)==0) printf("%d",(V-B)/(A-B));
        else printf("%d",(V-B)/(A-B)+1);
    }
    return 0;
}