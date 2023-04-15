//Illustrate the output of integer numbers under various formats.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int m=13245;
	long n=987654;
	printf("%d\n",m);
	printf("%10d\n",m);
	printf("%010d\n",m);
	printf("%-10d\n",m);
	printf("%10ld\n",n);
	printf("%10ld\n",-n);
	return(0);
}
