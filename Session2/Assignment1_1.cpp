#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a>b){
		if(b>c){
			printf("Min: %d",c);
		}else{
			printf("Min: %d",b);
		}
	}else{
		if(a>c){
			printf("Min: %d",c);
		}else{
			printf("Min: %d",a);
		}
	}
}
