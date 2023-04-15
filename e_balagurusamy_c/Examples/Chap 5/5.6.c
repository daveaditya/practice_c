//Program that reads a value in the range of 1 to 12 and print the name of that month and the next month. Print error for any other input value
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char ** argv) {
	//Your code here.
	char month[12][20]={
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August"
			"September",
			"October",
			"November",
			"December"
	};
	int i;
	printf("Enter the month value: ");
	scanf("%d",&i);

	if(i<1 || i>12) {
		printf("Incorrect value!!!");
		exit(0);
	}
	if(i!=12) {
		printf("\n%s followed by %s",month[i-1],month[i]);
	}
	else {
		printf("\n%s followed by %s",month[i-2],month[0]);
	}
	return(0);
}
