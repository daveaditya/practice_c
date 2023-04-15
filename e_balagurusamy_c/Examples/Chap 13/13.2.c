//Write a program to store a character string in a block of meory space created by malloc and then modify the same to store a larger string.
#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main(int argc,char ** argv) {
	//Your code here.
	char *buffer;

	if((buffer=(char *)malloc(10))==NULL) {
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size %d created\n",_msize(buffer));
	strcpy(buffer,"HYDERABAD");
	printf("\nBuffer contains: %s\n",buffer);

	if((buffer=(char *)realloc(buffer,15))==NULL) {
		printf("Reallocation failed.\n");
		exit(1);
	}
	printf("\nBuffer size modified.\n");
	printf("\nBuffer still contains: %s\n",buffer);
	strcpy(buffer,"SECUNDERABAD");
	printf("\nBuffer now contains: %s\n",buffer);
	free(buffer);
	return(0);
}
