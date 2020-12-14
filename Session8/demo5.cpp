#include <stdio.h>
int main(){
	int tmp[4][3];
	for(int i=0;i<4;i++){
		// tmp[i]
		for(int j=0;j<3;j++){
			printf("tmp[%d][%d]=",i,j);
			scanf("%d",&tmp[i][j]);
		}
	}
	printf("Ma tran 4x3:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",tmp[i][j]);
		}
		printf("\n");
	}
	int b[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			b[i][j] = tmp[j][i];
		}
	}
	printf("Ma tran chuyen vi:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
}
