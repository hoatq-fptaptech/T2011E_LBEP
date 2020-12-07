#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int s = 0,dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			s+= arr[i];
			dem++;
		}
	}
	if(dem!=0)
		printf("TBC so le: %f\n",(float)s/dem);
	else
		printf("mang ko co so le\n");	
}
