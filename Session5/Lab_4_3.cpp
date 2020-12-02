#include <stdio.h>
int main(){
	int S=0;
	for(int i=0,j=0;i<100;j++){
		if(j%2!=0){
			S+=j;
			i++;
		}
	}
	printf("Tong 100 so le: %d",S);
}
