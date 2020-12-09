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
	printf("Cac so nguyen to trong mang: ");
	int k=0;
	for(int i=0;i<n;i++){
		// kiem tra xem arr[i] co phai snt hay ko
			int dem=0;
			for(int j=2;j<=arr[i]/2;j++){
				if(arr[i]%j==0){
					dem++;
					break;
				}
			}
			if(dem==0 && arr[i]>1){
				printf("%d   ",arr[i]);
				k++;
			}
		//ket thuc
	}
	if(k==0){
		printf("khong co so nao");
	}
}
