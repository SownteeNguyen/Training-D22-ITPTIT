#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c; scanf("%d%d%d",&a,&b,&c);
	int delta = 1.0 * b * b - 4 * a * c;
	if (delta < 0) printf("null");
	else if (delta == 0) printf("%d",-b/(2*a));
	else{
		int k = (int) (sqrt)(delta);
		int x1 = (-b+k)/(2*a), x2 = (-b-k)/(2*a);
		if (x1 < x2){
			int temp = x1; x1 = x2; x2 =temp;
		}
		printf("%d\n",x1);
		printf("%d",x2);
	}
}

