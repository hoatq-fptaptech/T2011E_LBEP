#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int ary[n];// khai bao mang 10 so nguyen
	
	//float ary2[20] ;// khai bao mang 20 so thuc
	for(int i=0;i<n;i++){
		// trong nay se la tung phan tu cua mang 10 so
		printf("Nhap pt: ");
		scanf("%d",&ary[i]);
	}
	int high = ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>high){
			high = ary[i];
		}
	}
	// high la so lon nhat
	printf("So lon nhat: %d\n",high);
	// tim so nho nhat
	int min = ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]<min){
			min = ary[i];
		}
	}
	printf("So nho nhat: %d\n",min);
	
	// tim so gan lon nhat
	if(min == high){
		printf("mang toan so lon nhat");
	}else{
		int max2 = min ;
		// gia su ko co min trong chuong trinh
//		int max2 = max ;
//		for(int i=0;i<10;i++){
//			if(ary[i]<max){
//				max2= ary[i];
//				break;
//			}
//		}
//		if(max2 == max){
//			printf("toan so lon nhat");
//		}
		for(int i=0;i<n;i++){
			if(ary[i]<high && ary[i]>max2){
				max2 = ary[i];
			}
		}
		printf("So gan lon nhat: %d\n",max2);
	}
}
