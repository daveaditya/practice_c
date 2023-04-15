//Program to calculate EOQ and TBO.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float EOQ,TBO,rate,setup,holding;
	printf("\nEnter the rate: ");
	scanf("%f",&rate);
	printf("\nEnter the setup cost: ");
	scanf("%f",&setup);
	printf("\nEnter the holding cost per item per unit time: ");
	scanf("%f",&holding);
	EOQ=sqrt((2*rate*setup)/(holding));
	TBO=sqrt((2*setup)/(rate*holding));
	printf("\nEOQ = %f, and TBO = %f.",EOQ,TBO);
	return(0);
}
