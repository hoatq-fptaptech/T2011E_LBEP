#include <stdio.h>
#include <string.h>
int main(){
	char str1[20],str2[20];
//	for(int i=0;i<20;i++){
//		scanf("%c",&s[i]);
//	}
	printf("NHap chuoi:");
	scanf("%s",str1);
	printf("Nhap chuoi 2:");
	scanf("%s",str2);
	printf("Chuoi vua nhap S1: %s\n",str1);
	printf("Chuoi vua nhap S2: %s\n",str2);
	strcat(str1,str2);
	printf("Chuoi vua nhap S1: %s\n",str1);
	printf("Chuoi vua nhap S2: %s\n",str2);
	strcat(str2,str1);
	printf("Chuoi vua nhap S1: %s\n",str1);
	printf("Chuoi vua nhap S2: %s\n",str2);
	int cmp = strcmp(str1,str2);
	printf("cmp = %d\n",cmp);
	char h = 'h';
	int vitri = strchr(str1,h) - str1;// 2 dia chi 
	printf("Vi tri: %d\n",vitri);
	strcpy(str1,str2);
	printf("Chuoi vua nhap S1: %s\n",str1);
	printf("Chuoi vua nhap S2: %s\n",str2);
	int dodai = strlen(str1);
	printf("Do dai chuoi S1: %d\n",dodai);
//	str2= str; --> error
}
