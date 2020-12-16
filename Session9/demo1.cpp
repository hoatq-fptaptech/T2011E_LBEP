#include <stdio.h>
#include "demof.h"
int main(){
	// ko biet c la gi
	int x = tinhtong(4,5);
	printf("x = %d\n",x);
	x = tinhtong(100,50);
	printf("x = %d\n",x);
	// ko biet c la gi
	bool kt = kiemtrasnt(x);// lay gia tri tra ve
	if(kt){
		printf("%d la so nguyen to\n",x);
	}else{
		printf("%d ko phai la so nguyen to\n",x);
	}
	if(kiemtrasnt(x)){
		printf("%d la so nguyen to\n",x);
	}else{
		printf("%d ko phai la so nguyen to\n",x);
	}
	inthucdon();
	float dt = dientich(3,6,4);
	printf("dt tam giac: %f",dt);
} 
