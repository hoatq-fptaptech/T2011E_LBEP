#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
		// sap xep mang tu 0->i (i+1 gia tri)
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(arr[k]>arr[k+1]){
					int tmp = arr[k];
					arr[k]= arr[k+1];
					arr[k+1] = tmp;
				}
			}
		}
	}
	printf("mang sau khi nhap xong:");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
