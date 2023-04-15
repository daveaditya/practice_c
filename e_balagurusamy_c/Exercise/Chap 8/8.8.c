/*
 * Write a program that reads a string from the keyboard and determines whether
 * the string is a palindrome or not. (A string is a palindrome if it can be read from left and
 * right with the same meaning. For example, Madam and Anna are palindrome strings. Ignore capitalization.)
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char str[10];
	printf("Enter a string : ");
	gets(str);

	int length = 0;
	for(int i=0 ; str[i]!= '\0' ; i++) {
		length++;
	}

	int mid = length / 2;
	int FLAG = 1, i = 0;

	while(i<mid) {
		if(str[i] != str[length-i-1]) {
			FLAG = 0;
		}
		i++;
	}

	if(FLAG == 0) {
		printf("\nString is not a palindrome.");
	}
	else {
		printf("\nEnter string is a palindrome.");
	}

	return(0);
}
