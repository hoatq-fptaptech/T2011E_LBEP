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
void sapxepMang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main(){
	int tmp[5] = {8,1,9,0,3};
	int m = timMax(tmp,5);
	nhapMang(tmp,5);
	sapxepMang(tmp,5);
	inMang(tmp,5);
}
