//Multifunction program to illustrate the properties of global variables.
#include<stdio.h>

int func1(void);
int func2(void);
int func3(void);

int main(int argc,char ** argv) {
	//Your code here.
	int x=10;
	printf("x=%d\n",x);
	printf("x=%d",func1());
	printf("x=%d\n",func2());
	printf("x=%d\n",func3());
	return(0);
}

int func1(void) {
	x=x+1;
}

int func2(void) {
	int x;
	x=1;
	return(x);
}

int fuc3(void) {
	x=x+10;
}
