//Pragam that prints a sequence of numbers. Note the use of *= shorthand operator.
#include<stdio.h>

#define N 100
#define A 2

int main(int argc,char ** argv) {
	//Your code here.
	int a;
	a=A;
	while(a<N) {
		printf("%d\n",a);
		a*=a;
	}
	return(0);
}
