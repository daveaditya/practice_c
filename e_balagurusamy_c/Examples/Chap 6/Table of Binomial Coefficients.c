//Write your aim here.
#include<stdio.h>
#define MAX 10

int main(int argc,char ** argv) {
	//Your code here.
	int m,x,binom;
	printf(" mx");
	for(m=0;m<=10;m++) {
		printf("%4d",m);
	}
	printf("\n-------------------------------------------------\n");
	m=0;
	do {
		printf("%2d",m);
		x=0;
		binom=1;
		while(x<=m) {
			if(m==0 || x==0) {
				printf("%4d",binom);
			}
			else {
				binom=binom*(m-x+1)/x;
				printf("%4d",binom);
			}
			x=x+1;
		}
		printf("\n");
		m=m+1;
	} while(m<=MAX);
	printf("-------------------------------------------------\n");
	return(0);
}
