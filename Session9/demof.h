#include <math.h>
// ko biet c la gi
int tinhtong(int a,int b){
	int c = a +b;
	return c;// so nguyen
}
// ko biet c la gi
// viet ham kiem tra 1 so nguyen xem la chan hay le
bool kiemtrachanle(int a){
	if(a%2==0)
		return true;
	return false;	
}
// kiem tra 1 so co phai so nguyen to
bool kiemtrasnt(int a){
	if(a <2) return false;
	if(a==2) return true; 
	for(int i=2;i<=a/2;i++){
		if(a%i==0) return false;
	}
	return true;
}
void inthucdon(){
	printf("Menu:\n");
	printf("Com rang\n");
	printf("Pho\n");
	printf("My tom\n");
	return;// co the viet return hoac khong
}
bool kiemtra3canh(int a,int b,int c){
	return a>0&& b>0 && c>0 && a+b>c && a+c>b&& b+c>a;	
}
int chuvi(int a,int b,int c){
	if(kiemtra3canh(a,b,c))
		return a+b+c;
	return 0;	
}
float dientich(int a,int b,int c){
	if(kiemtra3canh(a,b,c)){
		float p = (float)chuvi(a,b,c)/2;// nua chu vi
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	return 0;
}
