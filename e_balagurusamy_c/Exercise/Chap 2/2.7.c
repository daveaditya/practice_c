//Program to do the following :
/*
 * 1. Declar x and y as integer variables and z as a short integer variable
 * 2. Assign two 6 digit numbers to x and y
 * 3. Assign the sum of x and y to z
 * 4. Output the values of x, y and z
 * Comment on the output
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x=562389,y=521478;
	short int z;
	z=x+y;
	printf("\nx = %d, y = %d, and z = %d",x,y,z);
	return(0);
}
