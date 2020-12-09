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
	int dem =0,max_dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			dem+=arr[i];
			if(dem>max_dem){
				max_dem=dem;
			}
		}else{
			dem=0;
		}
	}
	printf("Tong so duong lien tiep nhieu nhat: %d",max_dem);	
}
