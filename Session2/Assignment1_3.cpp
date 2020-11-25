#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a > 0){
		if(b>0){
			if(c>0){
				if(a+b>c){
					if(a+c>b){
						if(b+c>a){
							printf("day la 3 canh tam giac\n");
							int p = a+b+c;
							float q = (float)p/2;
							float s = sqrt(q*(q-a)*(q-b)*(q-c));
							printf("Chu vi: %d va dien tich: %f",p,s);
						}else{
							printf("Khong phai 3 canh tam giac");
						}
					}else{
						printf("Khong phai 3 canh tam giac");
					}
				}else{
					printf("Khong phai 3 canh tam giac");
				}
			}else{
				printf("Khong phai 3 canh tam giac");
			}
		}else{
			printf("Khong phai 3 canh tam giac");
		}
	}else{
		printf("Khong phai 3 canh tam giac");
	}
}
