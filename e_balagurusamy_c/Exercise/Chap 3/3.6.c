//Program to calculate salvage value from the equation Depreciatioin=(Purchase Price-Salvage Value)/Years of Service.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float pur,sal,dep;
	int years;
	printf("\nEnter the purchase price: ");
	scanf("%f",&pur);
	printf("\nEnter the depreciation: ");
	scanf("%f",&dep);
	printf("\nEnter the number of years: ");
	scanf("%d",&years);
	sal=pur-(dep*years);
	printf("\nThe Salvage value is %f.",sal);
	return(0);
}
