//Write a program to read three integers from the keyboard using one scanf statement and
//output them on one line using :
//a. three printf statements,
//b. only one printf with conversion specifiers, and
//c. only one printf without conversion specifiers.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\na. three printf statements");
	printf("\n%d",a);
	printf("\t%d",b);
	printf("\t%d",c);
	printf("\nb. only one printf with conversion specifiers");
	printf("\n%5d %5d %5d",a,b,c);
	printf("\nc. only one printf without conversion specifiers");
	printf("\n%d %d %d",a,b,c);
	return(0);
}
