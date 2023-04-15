/*
 * Write a program which will read a string a rewrite it in alphabetical order.
 * For exampel, the word STRING should be written as GINRST.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char str[20];
	printf("Enter a string: ");
	gets(str);
	for(int i=0;str[i]!='\0';i++) {
		for(int j=i+1;str[j]!='\0';j++) {
			if(str[i]>str[j]) {
				char ch;
				ch=str[i];
				str[i]=str[j];
				str[j]=ch;
			}
		}
	}
	printf("After sorrting the string is : %s",str);
	return(0);
}
