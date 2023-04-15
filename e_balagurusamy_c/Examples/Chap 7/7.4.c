/*
To write a rpogram using  two-dimensional arrayto compute and print the following information from the tabel.
a. Total value of sales of eache girl.
b. Total value of each item sold.
c. Grand total of sales of all items by all girls.
*/
#include<stdio.h>
#define MAXGIRLS 4
#define MAXITEMS 3

int main(int argc,char ** argv) {
	//Your code here.
	int value[MAXGIRLS][MAXITEMS];
	int girl_total[MAXGIRLS],item_total[MAXITEMS];
	int i,j,grand_total;

	printf("Input data\n");
	printf("Enter values, one at a time, row-wise\n\n");

	for(i=0;i<MAXGIRLS;i++) {
		girl_total[i]=0;
		for(j=0;j<MAXITEMS;j++) {
			scanf("%d",&value[i][j]);
			girl_total[i]=girl_total[i]+value[i][j];
		}
	}

	for(j=0;j<MAXITEMS;j++) {
		item_total[j]=0;
		for(i=0;i<MAXGIRLS;i++) {
			item_total[j]=item_total[j]+value[i][j];
		}
	}

	grand_total=0;
	for(i=0;i<MAXGIRLS;i++) {
		grand_total=grand_total+girl_total[i];
	}

	printf("\nGIRLS TOTALS\n\n");

	for(i=0;i<MAXGIRLS;i++) {
		printf("Salesgirl[%d]=%d\n",i+1,girl_total[i]);
	}
	printf("\nITEM TOTALS\n\n");
	for(j=0;j<MAXITEMS;i++) {
		printf("Item[%d]=%d\n",j+1,item_total[j]);
	}
	printf("\nGrand total=%d\n",grand_total);
	return(0);
}
