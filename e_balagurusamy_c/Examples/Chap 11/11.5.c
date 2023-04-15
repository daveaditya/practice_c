//Program to determine the length of a character stirng.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char *name;
	int length;
	char *cptr=name;
	name="DELHI";
	printf("%s\n",name);
	while(*cptr!='\0') {
		printf("%c is stored at address %u\n",*cptr,cptr);
		cptr++;
	}
	length=cptr-name;
	printf("\nLength of the string= %d\n",length);
	return(0);
}
