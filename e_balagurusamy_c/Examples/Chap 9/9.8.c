//Multifunction to show how automatic variables work.
#include<stdio.h>

void function1(void);
void function2(void);

int main(int argc,char ** argv) {
	//Your code here.
	int m=1000;
	function2();

	printf("%d\n",m);
	return(0);
}

void function1(void) {
	int m=10;
	printf("%d\n",m);
}

void function2(void) {
	int m=100;
	function1();
	printf("%d\n",m);
}
