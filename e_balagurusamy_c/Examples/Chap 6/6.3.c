//Program uses for loop to print the "Powers of 2. table for the power 0 to 20, both negative and positive
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	long int p;
	int n;
	double q;
	printf("---------------------------------------------\n");
	printf("2 to power n	    n	    2 to power -n\n");
	printf("---------------------------------------------\n");
	p=1;
	for(n=0;n<21;n++) {
		if(n==0) {
			p=1;
		}
		else {
			p=p*2;
		}
		q=1.0/(double)p;
		printf("%10ld %10d %20.12lf\n",p,n,q);
	}
	printf("---------------------------------------------\n");
	return(0);
}
