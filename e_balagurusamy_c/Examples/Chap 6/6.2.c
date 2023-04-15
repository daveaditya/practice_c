//A program to print the nultiplication table from 1x1 to 12x10.
#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12

int main(int argc,char ** argv) {
	//Your code here.
	int row,column,y;
	row=1;
	printf("	  MULTIPLICATION TABLE	\n");
	printf("-----------------------------------------\n");
	do {
		column=1;
		do {
			y=row*column;
			printf("%4d",y);
			column=column+1;
		} while(column<=COLMAX);
		printf("\n");
		row=row+1;
	} while(row<=ROWMAX);
	printf("-----------------------------------------\n");
	return(0);
}
