/*
 * Write a program to illustrate the use of stringizing operator.
 */
#include<stdio.h>

#define sum(xy) printf(#xy " = %d\n",xy);

int main(int argc,char ** argv) {
	//Your code here.
	sum(10+20)
	return(0);
}
