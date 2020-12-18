#include <stdio.h>
#include <stdlib.h>
typedef struct Sinhvien{
	int ms;
	char ten[50];// day la 1 chuoi
	int diem;
}SV; // khai bao 1 kieu du lieu

int main(){
	struct Sinhvien sv1;
	printf("Nhap ma so sv:");
	scanf("%d",&sv1.ms);
	printf("Nhap ten sv:");
	scanf("%s",sv1.ten);
	printf("Nhap diem sv:");
	scanf("%d",&sv1.diem);
	
	printf("thong tin sv vua nhap:\n");
	printf("%d -- %s -- %d",sv1.ms,sv1.ten,sv1.diem);
	SV t2011e[25];
	for(int i=0;i<25;i++){
		printf("Nhap ma so sv:");
		scanf("%d",&t2011e[i].ms);
		printf("Nhap ten sv:");
		scanf("%s",t2011e[i].ten);
		printf("Nhap diem sv:");
		scanf("%d",&t2011e[i].diem);
	}
	SV *v;
	v = (SV *)malloc(10 * sizeof(SV));
	for(int i=0;i<10;i++){
		printf("Nhap ma sinh vien:");
		scanf("%d",&((v+i)->ms)); // (v+i)->ms  <==> v[i].ms
		printf("Nhap ten sv:");
		scanf("%s",((v+i)->ten));
		printf("Nhap diem sv: ");
		scanf("%d",&((v+i)->diem));
	}
	
	//v = (SV *)realloc(v,20*sizeof(SV));
	
	free(v);
}
