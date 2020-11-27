#include <stdio.h>
int main(){
	int m,d;
	printf("NHap thang: ");
	scanf("%d",&m);
	printf("Nhap ngay: ");
	scanf("%d",&d);
	if(m>=1){
		if(m<=12){
			if(d>=1){
				if(d<=31){
					// khi da nhap 1<=m<=12 va 1<=d<=31
					if(m==1){
						printf("Day la ngay thu %d trong nam",d);
						if(d%7==0){
							printf("\nVa la chu nhat");
						}else{
							printf("\nVa la thu ",d%7+1);
						}
					}
					if(m==2){
						if(d<29){
							printf("Day la ngay thu %d trong nam",d+31);	
							if((d+31)%7==0){
								printf("\nVa la chu nhat");
							}else{
								printf("\nVa la thu ",(d+31)%7+1);
							}
						}else{
							printf("Nhap sai ngay thang");
						}
					}
					if(m==3){
						printf("Day la ngay thu %d trong nam",d+31+28);
						if((d+31+28)%7==0){
							printf("\nVa la chu nhat");
						}else{
							printf("\nVa la thu ",(d+31+28)%7+1);
						}
					}
					if(m==4){
						if(d<31){
							printf("Day la ngay thu %d trong nam",d+31+28+31);	
							if((d+31+28)%7==0){
								printf("\nVa la chu nhat");
							}else{
								printf("\nVa la thu %d",(d+31+28+31)%7+1);
							}
						}else{
							printf("Nhap sai ngay thang");
						}
					}
					if(m==5){
						printf("Day la ngay thu %d trong nam",d+31+28+31+30);
						if((d+31+28+31+30)%7==0){
								printf("\nVa la chu nhat");
						}else{
							printf("\nVa la thu %d",(d+31+28+31+30)%7+1);
						}
					}
					if(m==6){
						if(d<31){
							printf("Day la ngay thu %d trong nam",d+31+28+31+30+31);
							if((d+31+28+31+30+31)%7==0){
								printf("\nVa la chu nhat");
							}else{
								printf("\nVa la thu %d",(d+31+28+31+30+31)%7+1);
							}	
						}else{
							printf("Nhap sai ngay thang");
						}
					}
					if(m==7){
						printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30);
						if(d%7==0){
								printf("\nVa la chu nhat");
						}else{
							printf("\nVa la thu %d",(d+31+28+31+30+31+30)%7+1);
						}
					}
					if(m==8){
						printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30+31);
					}
					if(m==9){
						if(d<31){
							printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30+31+31);	
						}else{
							printf("Nhap sai ngay thang");
						}
					}
					if(m==10){
						printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30+31+31+30);
					}
					if(m==11){
						if(d<31){
							printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30+31+31+30+31);	
						}else{
							printf("Nhap sai ngay thang");
						}
					}
					if(m==12){
						printf("Day la ngay thu %d trong nam",d+31+28+31+30+31+30+31+31+30+31+30);
					}
				}else{
					printf("Nhap sai ngay thang");
				}
			}else{
				printf("Nhap sai ngay thang");
			}
		}else{
			printf("Nhap sai ngay thang");
		}
	}else{
		printf("Nhap sai ngay thang");
	}
}
