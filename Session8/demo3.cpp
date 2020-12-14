#include <stdio.h>
int main(){
	int arr[16] = {6,13,14,25,33,43,51,53,64,72,84,93,95,96,97,99};
	int search = 34;
	int lo = 0,hi= 15;
	int f =0;// bao hieu chua tim thay
	for( ; lo<=hi;){
		int mid = (lo+hi)/2;
		if(arr[mid]==search){
			printf("Da tim thay");
			f=1;
			break;
		}else if(search>arr[mid]){
			lo = mid+1;
		}else{
			hi = mid-1;
		}		
	}
	if(f==0)
		printf("KHong tim thay");
}
