/*
 A class of n students take an annual examincation in m subjects. A program to read the marks obtained by each
 student in various subjects and to compute and print the total marks obtained by each of them.
*/
#include<stdio.h>
#define FIRST 360
#define SECOND 240

int main(int argc,char ** argv) {
	//Your code here.
	int n,m,i,j,roll_number,marks,total;
	printf("Enter number of studetns and subjects\n");
	scanf("%d %d",&n,&m);
	printf("\n");
	for(i=1;i<=n;i++) {
		printf("Enter roll number: ");
		scanf("%d",&roll_number);
		total=0;
		printf("\nEnter marks of %d subjects for ROLL NO %d\n",m,roll_number);
	}
	for(j=1;j<=m;j++) {
		scanf("%d",&marks);
		total=total+marks;
	}
	printf("TOTAL MARKS=%d",total);
	if(total>=FIRST) {
		printf("(FIRST DIVISION)\n\n");
	}
	else if(total>=SECOND) {
		printf("(SECOND DIVISION)\n\n");
	}
	else {
		printf("(***FAIL***)\n\n");
	}
	return(0);
}
