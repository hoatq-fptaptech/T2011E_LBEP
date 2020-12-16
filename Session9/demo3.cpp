#include <stdio.h>
bool kiemtrasnt(int n){
	if(n<2) return false;
	if(n<=3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int timsnttieptheo(int n){
	for(int i=n+1;true;i++){
		// tim duoc thi dung
		if(kiemtrasnt(i))
			return i;
	}
	//return 2;
}
// tim so dao nguoc
int timSoDaoNguoc(int n){
	int x=0;
	while(n!=0){
		x = x*10 + n%10;
		n/=10;
	}
	return x;
}
int fibonaci(int n){
	if(n==0) return 0;
	if(n<3) return 1;
	int x1=0,x2=1,x3=1;
	for(int i=4;i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;
}
int main(){
	
}
