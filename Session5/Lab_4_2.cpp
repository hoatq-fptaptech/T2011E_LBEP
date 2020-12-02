#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	float s=0;
	for(int i=1;i<=n;i++){
		s+= (float)1/i;
	}
	printf("S = %f",s);
}
