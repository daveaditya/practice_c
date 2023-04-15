//Use of Subroutines.
#include<stdio.h>

int mul(int a,int b);

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c;
	a=5;
	b=10;
	c=mul(a,b);
	printf("Multiplication of %d and %d is %d.",a,b,c);
	return(0);
}

int mul(int x,int y) {
	int p;
	p=x*y;
	return(p);
}
