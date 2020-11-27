#include <stdio.h>
int main(){
	int n=10;
	
	if(n>=5){
		printf("A");
	}else if(n>=2){
		printf("B");
	}else if(n>=15){
		printf("C");
	}else{
		printf("D");
	}
	
	int x = 3;
	switch(x){
		case 1: printf("\nA");break;
		case 2: printf("\nB");break;
		case 3: printf("\nC");break;
		default: printf("\nD");
	}
	char c;
	printf("\n Nhap Y|N:");
	scanf("%c",&c);
	switch(c){
		case 'Y':printf("Tiep tuc");break;
		case 'N': printf("Stop...");break;
		default: printf("Vui long chon dung Y hoac N");
	}

}
