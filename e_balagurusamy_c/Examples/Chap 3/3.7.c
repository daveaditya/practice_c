//Program to sum 1 to n of 1/i.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float sum;
	int n;
	sum=0;
	for(n=1;n<=10;++n) {
		sum=sum+1/(float)n;
		printf("%2d %6.4f\n",n,sum);
	}
	return(0);
}
