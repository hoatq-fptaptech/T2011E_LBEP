#include <stdio.h>
#include <string.h>
int main(){
	char s1[5][50];
	for(int i=0;i<5;i++){
		// nhap chuoi s1[i]
		printf("Nhap chuoi: ");
		scanf("%s",s1[i]);
	}
	// sap xep mang theo alphabe
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			int cmp =strcmp(s1[j],s1[j+1]);
			if( cmp >0){
				char tmp[50];
				strcpy(tmp,s1[j]);// tmp = s1[j]
				strcpy(s1[j],s1[j+1]); // s1[j] = s1[j+1]
				strcpy(s1[j+1],tmp);// s1[j+1]=tmp
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%s \n",s1[i]);
	}
}
