#include <stdio.h>
int main(){
	int arr[6] = {12,6,22,14,8,17};
	
	for(int i=0;i<6-1;i++){
		for(int j=0;j<6-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	printf("Sau khi sap xep: ");
	for(int i=0;i<6;i++){
		printf("%5d",arr[i]);
	}
}
