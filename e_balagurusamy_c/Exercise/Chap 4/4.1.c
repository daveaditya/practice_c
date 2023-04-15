//Given the string "WORDPROCESSING", write a program to read the string from the terminal and display teh same in the following formats:
//a. WORD PROCESSING, b. WORD\nPROCESSING, and c. W.P.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char string[15];
	printf("Enter a string: ");
	scanf("%s",string);
	printf("\n%.4s %-.10s",string,string);
	printf("\n%.4s\n");
	return(0);
}
