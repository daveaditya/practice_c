//Write function to add and subtract 20 and 10.
#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main(int argc,char ** argv) {
	//Your code here.
	printf("20 + 10 = %d",add(20,10));
	printf("\n20 - 10 = %d",sub(20,10));
	return(0);
}

int add(int a,int b) {
	return(a+b);
}

int sub(int a, int b) {
	return(a-b);
}
