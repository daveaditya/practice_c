//A program to evaluate y=x^n using while loop.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count,n;
	float x,y;
	printf("Enter the values of x and n: ");
	scanf("%f %d",&x,&n);
	y=1.0;
	count=1;
	while(count<=n) {
		y=y*x;
		count++;
	}
	printf("\nx= %f; n=%d; x to power n: %f\n",x,n,y);
	return(0);
}
