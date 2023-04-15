/*
 * Define symbolic constants for { and } and printing a blank line.
 * Write a small program using these constants.
 */
#include<stdio.h>

#define start {
#define end }

int main(int argc,char ** argv) {
	//Your code here.
	for(int i=0;i<10;i++)
	start
		printf("\ni is %d",i);
	end
	return(0);
}
