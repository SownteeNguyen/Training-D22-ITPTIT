#include <stdio.h>
#include <math.h>

int main()
{
    int n, p, a, o;
    scanf("%d %d %d %d",&n,&p,&a,&o);
    int b = abs(a-o);
    if (b%p == 0 && n*p >= b)
    {
        if ((n-(b/p)) % 2 == 0)
        {
            printf("'YES'");
        }
        else 
        {
            printf("'N0'\n%d",b/p);
        }
    }
    else
    {
        printf("'N0'\n");
        if(n*p < b)
        {
            printf("%d",b - n*p);
        }
        else 
        {
            int x = b%p, y = b/p;
            if((n - y)%2 == 0)
            {
                printf("%d",x);
            }
            else 
                printf("%d",p-x);
        }
        
    }
    
    return 0;
}