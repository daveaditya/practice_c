/*
 * Write a program that will count the occurences of a specified character in
 * a given line of text. Test your program.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count=0;
	char text[25];
	printf("Enter text: ");
	gets(text);
	for(int i=0;text[i]!=NULL;i++) {
		if(text[i]=='e') {
			count++;
		}
	}
	printf("The character 'e' has %d occurences.",count);
	return(0);
}
