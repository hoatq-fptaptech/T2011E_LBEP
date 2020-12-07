#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap so x can tim: ");
	scanf("%d",&x);
	int kiemtra =0;
	for(int i=0;i<n;i++){
		if(x== arr[i]){
			printf("%d co trong mang",x);
			kiemtra=1;
			break;
		}
	}
	if(kiemtra==0)
		printf("%d ko co trong mang",x);
}
