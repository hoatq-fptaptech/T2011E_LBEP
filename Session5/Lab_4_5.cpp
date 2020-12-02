#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int k = 0; // k la so luong uoc so cua n
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			k++;
			break;
		}
	}
	if(k==0 && n>1){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d ko phai so nguyen to",n);
	}
}
