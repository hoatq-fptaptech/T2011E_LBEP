#include <stdio.h>
#include <string.h>
int main(){
	char s1[20];
	printf("Nhap chuoi: ");
	scanf("%s",s1);
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122)
			s1[i]-=32;
	}
	printf("Sau khi bien doi: %s",s1);
}
