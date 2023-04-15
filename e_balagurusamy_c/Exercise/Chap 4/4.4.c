//Program that reads 4 floating point values in the range 0.0 to 20.0, and prints a horizontal
//bar chart to represent these values using the character * as the fill character. For the purpose
//of the chart, the values may be rounded off to the nearest integer. For example, the value 4.36
//shoud be represented as follows:
//* * * *
//* * * * 4.36
//* * * *
//Note that the actual values are shown at the end of each bar

#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float num[4];
	printf("Enter four floating point numbers: ");
	for(int i=0;i<4;i++) {
		scanf("%f",&num[i]);
	}
	printf("\nThe horizontal bar graph will be as follows: \n\n\n");
	for(int i=0;i<4;i++) {
		for(int j=1;j<=3;j++) {
			for(int k=1;k<=num[i];k++) {
				printf("* ");
			}
			if(j==2) {
				printf("%3f",num[i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return(0);
}
