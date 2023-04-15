//Write a program to illustrate the properties of a static variable.
#include<stdio.h>

void stat(void);

int main(int argc,char ** argv) {
	//Your code here.
	int i;
	for(i=1;i<=3;i++) {
		stat();
	}
	return(0);
}

void stat(void) {
	static int x=0;
	x=x+1;
	printf("x=%d\n",x);
}
