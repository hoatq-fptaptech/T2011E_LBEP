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
	for(int i=0;i<n;i++){
		if(arr[i] %2!=0){
			x= arr[i];
		}
	}
	if(x==0){
		printf("Mang ko co so le");
	}else{
		printf("So le cuoi cung: %d",x);
	}

}
