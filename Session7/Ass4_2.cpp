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
	int x=0;
	// tim 1 so duong bat ky
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x= arr[i];
			break;		}
	}
	if(x==0){
		printf("danh sach ko co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]<x){
				x= arr[i];
			}
		}
		printf("So duong nho nhat: %d",x);
	}
}
