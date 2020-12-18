#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr,n;
	printf("Nhap n=");
	scanf("%d",&n);
	char *ch;
//	ch = (char *)malloc(4*sizeof(char));
//	arr = (int *)malloc(n*sizeof(int));
	arr = (int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap pt arr[%d]=",i);
//		scanf("%d",&arr[i]);
		scanf("%d",(arr+i));	
	}
	char h;
	printf("Ban co muon nhap them so khong:")
	scanf("%c",&h);
	int m=0;
	if(h=='y'){
		printf("Nhap so luong muon them:");
		scanf("%d",&m);
		arr = (int *)realloc(arr,(n+m)*sizeof(int));
		for(int i=n;i<n+m;i++){
			printf("Nhap pt arr[%d]=",i);
	//		scanf("%d",&arr[i]);
			scanf("%d",(arr+i));
		}		
	}
	for(int i=0;i<n+m;i++){
		printf("%5d",arr[i]);
	}
	// sap xep mang (n+m) phan tu o tren
	for(int i=0;i<n+m-1;i++){
		for(int j=0;j<n+m-i-1;j++){
			if( *(arr+j) > *(arr+j+1) ){
				int tmp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = tmp;
			}
		}
	}	
	//
	for(int i=0;i<n+m;i++){
		printf("%5d",arr[i]);
	}
	free(arr);
}

