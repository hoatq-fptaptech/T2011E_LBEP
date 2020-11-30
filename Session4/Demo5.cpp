#include <stdio.h>
int main(){
	int n,x=0;
	printf("Nhap n=");
	scanf("%d",&n);
	for( ;n!=0; ){
		x = x*10 + n%10;
		n/=10;
	}
	printf("So dao nguoc: %d",x);
}
