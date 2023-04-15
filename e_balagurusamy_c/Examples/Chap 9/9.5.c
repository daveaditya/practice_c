//Write a funciton power that computes x raised to the power y for integers x and y and returns double-type value.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x,y;
	double power(int,int);
	printf("Enter x,y: ");
	scanf("%d %d",x,y);
	printf("%d to power %d is %f\n",x,y,power(x,y));
	return(0);
}

double power(int x,int y) {
	double p;
	p=1.0;

	if(y>0) {
		while(y--) {
			p*=x;
		}
	}
	else {
		while(y++) {
			p/=x;
		}
	}
	return(p);
}
