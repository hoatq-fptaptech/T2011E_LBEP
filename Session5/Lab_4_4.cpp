#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
	}while(!(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+c>b));
	int p = a+b+c;
	float p2 = (float)p/2;
	float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("Chu vi: %d va dien tich: %f",p,s);
}
