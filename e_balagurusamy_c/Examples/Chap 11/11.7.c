//To calculate the sum of twop n umbers which are passed as arguments using the call by reference method.
#include<stdio.h>

void swap(int *p,int *q);

int main(int argc,char ** argv) {
	//Your code here.
	int x=0;
	int y=20;
	printf("\nValue of x and y before swapping are x=%d and y=%d",x,y);
	swap(&x,&y);
	printf("\n\nValue of x and y after swapping are x=%d and y=%d",x,y);
	return(0);
}


void swap(int *p,int *q) {
	int r;
	r=*p;
	*p=*q;
	*q=r;
}
