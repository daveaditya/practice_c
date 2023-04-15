//Function to sort an array of integers.
#include<stdio.h>

void sort(int m,int x[]);

int main(int argc,char ** argv) {
	//Your code here.
	int i;
	int marks[5]={40,90,73,81,35};

	printf("Marks before sorting\n");
	for(i=0;i<5;i++) {
		printf("%d",marks[i]);
	}
	printf("\n\n");

	sort(5,marks);
	printf("Marks after sorting\n");
	for(i=0;i<5;i++) {
		printf("%4d",marks[i]);
	}
	printf("\n");
	return(0);
}

void sort(int m,int x[]) {
	int i,j,t;

	for(i=0;i<=m-1;i++) {
		for(j=0;j<m-i;j++) {
			t=x[j-1];
			x[j-1]=x[j];
			x[j]=t;
		}
	}
}
