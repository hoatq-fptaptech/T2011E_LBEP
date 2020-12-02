#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("start i = %d\n",i);
		if(i==4){
			break;
			//continue;
		}
		printf("end i = %d\n",i);
	}
}
