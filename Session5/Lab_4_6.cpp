#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<=0){
		printf("So thu %d la: %d",n,0);
	}else if(n<=2){
		printf("So thu %d la: %d",n,1);
	}else{
		int x=0,y=1,z=1;
		for(int i=3;i<=n;i++){
			x=y;
			y=z;
			z = x+y;
		}
		printf("So thu %d la: %d",n,z);	
	}
}
