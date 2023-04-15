//Testing th e correctness of reading of data by scanf function.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a;
	float b;
	char c;
	printf("Enetr values of a, b, and c\n");
	if(scanf("%d %f %c",&a,&b,&c)==3) {
		printf("a=%d b=%f c=%c\n",a,b,c);
	}
	else {
		printf("Error in input\n");
	}
	return(0);
}
