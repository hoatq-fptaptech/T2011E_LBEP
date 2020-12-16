#include <stdio.h>
int timMax(int arr[],int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max>arr[i])
			max = arr[i];
	}
	return max;
}
void inMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void nhapMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
int main(){
	int tmp[5] = {8,1,9,0,3};
	int m = timMax(tmp,5);
}
