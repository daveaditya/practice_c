/*
 * Write a program to extract exact portion of a character string and print hte extracted string.
 * Assume that m characters are extracted, starting with the nth character.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char input[15],output[15];
	int n,m,len=0;
	printf("Enter a string: ");
	gets(input);
	for(int i=0;input[i]!='\0';i++) {
		len++;
	}
	printf("Enter the coordinates for extraction of string...");
	printf("Position (1 based array): ");
	scanf("%d",&n);
	printf("Number of characters: ");
	scanf("%d",&m);
	if((n+m)>len) {
		printf("Could not perform operation");
	}
	else {
		int i,j;
		for(i=n-1,j=0;i!=(n+m-1);i++,j++) {
			output[j]=input[i];
		}
		output[j+1]='\0';
		printf("Extracted string is : %s",output);
	}
	return(0);
}
