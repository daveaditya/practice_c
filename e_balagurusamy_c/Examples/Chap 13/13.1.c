//Program that uses a table of integers whose size will be specified interactively.
#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main(int argc,char ** argv) {
	//Your code here.
	int *p,*table;
	int size;
	printf("\nWhat is the size of table?");
	scanf("%f",&size);
	printf("\n");

	if((table=(int *)malloc(size*sizeof(int)))==NULL) {
		printf("No space available\n");
		exit(1);
	}
	printf("\nAddress of the first byte is %u\n",table);

	printf("\nInput table values\n");

	for(p=table;p<table;p++) {
		scanf("%d",p);
	}

	for(p=table+size-1;p>=table;p--) {
		printf("%d is stored at address %u\n",*p,p);
	}
	return(0);
}
