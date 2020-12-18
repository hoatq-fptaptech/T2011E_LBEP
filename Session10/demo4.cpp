#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	printf("\n x = ");
	std::cout << x;
	printf("\n dia chi cua x: ");
	std::cout << &x;
	int *p; // chi luu duoc dia chi
	p= &x;
	printf("\n p= ");
	std::cout<< p;
	x++; // tham chieu truc tiep
	printf("\nx = %d",x);//11
	(*p)++;// tham chieu gian tiep
	printf("\nx = %d",x);
	(*p) = 0;
	printf("\nx = %d",x);
	p++;
	//(p+5); // nhin vao nha cac p 5 nha` 
	
}
