/*
 * Write a program to read the age of 100 persons and count he persons in the age group of 50 to 60.
 * Use for and continue statements.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int age,count=0;
	printf("\nEnter ages of 100 persons: ");
	for(int i=1;i<=100;i++) {
		scanf("%d",&age);
		if(age>=50 && age<=60) {
			count++;
		}
		else {
			continue;
		}
	}
	printf("\nPeople in the age group 50 to 60 are: %d",count);
	return(0);
}
