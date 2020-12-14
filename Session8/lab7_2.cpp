#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		// nhap vao 1 so ma mang tu 0->i-1 chua co
		int x;
		int f;// f=0 ko nam trong, 1: nam trong
		do{
			f=0;
			printf("nhap arr[%d] = ",i);
			scanf("%d",&x);
			for(int j=0;j<i;j++){
				if(x==arr[j]){
					f=1;
					break;
				}
			}	
		}while(f==1);
		arr[i]=x;
	}
	
	printf("mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	
}
