#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		// tinh giai thua cua so hien tai: i
		int s=1;
		for(int j=1;j<=i;j++){
			s*=j;
		}
		printf("%d! = %d\n",i,s);
		// tinh xong
	}
}
