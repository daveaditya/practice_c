/*
 * Write a program that will compute the length of a given character string.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int length=0;
	char string[15];
	printf("Enter a string: ");
	gets(string);
	for(int i=0;string[i]!=NULL;i++) {
		length++;
	}
	printf("The length of string is %d.",length);
	return(0);
}
