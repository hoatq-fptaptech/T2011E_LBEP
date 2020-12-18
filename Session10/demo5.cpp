#include <stdio.h>
#include <iostream>
int main(){
	int arr[25] ={1,3,5,7,9}; // arr la bien con tro va giu dia chi cua arr[0]
//	for(int i=0;i<5;i++){
//		printf("%5d",arr[i]);
//	}
	printf("\n arr[0] = %d",arr[1]);
	printf("\n dia chi arr[1]:");
	std::cout << &arr[1];
	printf("\n gia tri cua arr: ");
	std::cout << arr+1;
	*(arr+3) = 10;//arr[3] = 10;
}
