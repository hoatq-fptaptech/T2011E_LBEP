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
	
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			x= arr[i];
			break;
		}
	}
	if(x==0){
		printf("Khong co so le nao car");
	}else{
		printf("so le cuoi cung: %d",x);
	}
}
