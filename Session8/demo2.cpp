#include <stdio.h>
int main(){
	int arr[6] = {12,6,22,14,8,17};
	for(int i=1;i<6;i++){
		int j=i-1;
		int tmp = arr[i];
		for( ;j>=0&& tmp<arr[j]; ){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
	printf("Sau khi sap xep: ");
	for(int i=0;i<6;i++){
		printf("%5d",arr[i]);
	}
}
