#include <stdio.h>
int main(){
//	for(int i=0;i<10;i++){
//		printf("i = %d\n",i);
//	}
//	int x=0;
//	while(x<10){
//		printf("x = %d\n",x);
//		x++;
//	}
	
	int x = 5;
	while(x>5){
		printf("While...\n");
	}
	do{
		printf("do ... while\n");	
	}while(x>5);
	
	// vi du bat nguoi dung nhap 1 so tu nhien
	int n;
	do{
		printf("n= ");
		scanf("%d",&n);
	}while(n<0);
	printf("chuc mung ban da duoc so tu nhien: %d",n);
	
}
