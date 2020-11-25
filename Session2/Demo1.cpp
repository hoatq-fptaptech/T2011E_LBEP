#include <stdio.h>
int main(){
	int x,y;
	x=10;
	y=20;
	printf("x = %d \n",x);
	x = x+5;
	printf("x = %d \n",x);
	x = x*x*x;
	printf("x = %d \n",x);
	y= y*y;
	printf("x = %d va y = %d va tong = %d \n",x,y,x+y);
	float p = 3.14159;
	printf("PI = %f \n",p);
	printf("x = %d va y = %d va PI = %f \n",x,y,p);
	char h;
	h = '@';
	printf("email: levananh%cgmail.com \n",h);
	double s = 123.6533;
	printf("Tong tien:  %lf$ \n",s);
}
