#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int d1=0,d2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				d1+=arr[i][j];
			}
			if(i+j==n-1){
				d2+= arr[i][j];
			}
		}
	}
	printf("Trung binh cong cua D1 = %f \n",(float)d1/n);
	printf("Trung binh cong cua D2 = %f ",(float)d2/n);
}
