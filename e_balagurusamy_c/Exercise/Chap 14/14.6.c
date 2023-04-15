/*
 * Write symbolic constants for the binary arithmetic operators +,-,*, and /.
 * Write a short program to illustrate the use of these symbolic constants.
 */
#include<stdio.h>

#define add +
#define sub -
#define multi *
#define div /

int main(int argc,char ** argv) {
	//Your code here.
	printf("\n5 + 5 = %d",5 add 5);
	printf("\n5 - 5 = %d",5 sub 5);
	printf("\n5 * 5 = %d",5 multi 5);
	printf("\n5 / 5 = %d",5 div 5);
	return(0);
}
