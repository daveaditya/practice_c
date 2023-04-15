//Program using for loop to print the following output.
/*
 * C
 * CP
 * CPr
 * CPro
 * .....
 * .....
 * CProgramming
 * CProgramming
 * .....
 * .....
 * CPro
 * CPr
 * CP
 * C
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	for(c=0;c<=11;c++) {
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	printf("|---------|\n");
	for(c=11;c>=0;c--) {
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	return(0);
}
