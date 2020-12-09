#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Cac so dao nguoc: ");
	for(int i=0;i<n;i++){
		// tim so dao nguoc cua arr[i]
			int x = 0;
			for( ;arr[i]!=0; ){
				x= x*10+ arr[i]%10;
				arr[i]/=10;
			}
			printf("%5d",x);
		// ket thuc
	}
}
