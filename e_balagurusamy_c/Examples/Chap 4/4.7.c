//Illustrate the function of %[] specification.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char address[80];
	printf("Program A\n\n");
	printf("Enter address\n");
	scanf("%[a-z]",address);
	printf("%-80s\n\n",address);
	printf("Program B\n\n");
	printf("Enter address\n");
	scanf("%[^\n]",address);
	printf("%-80s",address);
	return(0);
}
