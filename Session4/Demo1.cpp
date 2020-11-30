#include <stdio.h>
int main(){
	int s;
	s=0;
	for(int i=1;i<=1000;i++){
		s += i;//s = s+i;
	}
//	for(int i=1;i<=1000;s += i,i++); -- cach viet khac

//	while(i<=1000){
//		s+=i;
//		i++;
//	}
	printf("i= %d",i);
	printf("s = %d",s);
}
