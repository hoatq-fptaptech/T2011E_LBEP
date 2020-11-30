#include <stdio.h>
int main(){
	float s=4000;
	int y=0;
	for(y=0;s<1000000;y++){
		s = s+ s*8/100;
	}
	printf("So tien thu duoc: %f sau %d nam",s,y);
}
