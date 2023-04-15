//Program to store the string "United Kingdom" in the array and display the string under various format specifiers.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char country[15]="United Kingdom";
	printf("\n\n");
	printf("*12345679012345*\n");
	printf("-----\n");
	printf("%15s\n",country);
	printf("%5s\n",country);
	printf("%15.6s\n",country);
	printf("%-15.6s\n",country);
	printf("%15.0s\n",country);
	printf("%.3s\n",country);
	printf("%s\n",country);
	printf("-----\n");
	return(0);
}
