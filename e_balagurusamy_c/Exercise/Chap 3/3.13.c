//Print the largest number out of three entered without using if statement.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c;
	printf("\nEnter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	(a>b && a>c) ? printf("\nThe largest number is %d.",a) : (b>c) ? printf("\nThe largest number is %d.",b) : printf("\nThe largest number is %d.",c) ;
	return(0);
}
