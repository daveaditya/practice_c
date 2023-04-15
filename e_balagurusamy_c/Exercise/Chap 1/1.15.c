//Program to find and print addition, subtraction, multiplication and division of x and y.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x,y;
	printf("\nEnter two numbers : ");
	scanf("%d %d",&x,&y);
	printf("\nx = %d\t\t\t\ty = %d",x,y);
	printf("\nAddition = %d\t\t\tSubtraction = %d",(x+y),(x-y));
	printf("\nMultiplication = %d\t\tDivision = %d",(x*y),(x/y));
	return(0);
}
