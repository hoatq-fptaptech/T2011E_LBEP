#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int m = x;
	// tim so bat ky nho hon x
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			m=arr[i];
			break;
		}
	}
	if(m==x){
		printf("mang toan so lon hon %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<x&& arr[i]>m){
				m=arr[i];
			}
		}
		printf("Tiem can duoi: %d",m);
	}
}
