/*
 * Write a program to read three integer values from the keyboard and displays the output stating
 * stating that they are the sides of right-angled triangle.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c;
	printf("\nEnter the values of a,b,c : ");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a)+(b*b)==(c*c)) {
		printf("\nThe given measures belongs to a right-angled triangle.");
	}
	else if((b*b)+(c*c)==(a*a)) {
		printf("\nThe given measures belongs to a right-angled triangle.");
	}
	else if((a*a)+(c*c)==(b*b)) {
		printf("\nThe given measures belongs to a right-angled triangle.");
	}
	else {
		printf("\nThe given measures do not belong to a right-angled triangle.");
	}
	return(0);
}
