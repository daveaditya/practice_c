//Program to get price of items and print the list of items.
//Rice 16.75 and Sugar 15
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float rice,sugar;
	printf("\nEnter the cost of 1kg of rice and sugar : ");
	scanf("%f %f",&rice,&sugar);
	printf("\n* * * List of Items* * *");
	printf("\nItem\t\tPrice");
	printf("\nRice\t\tRs. %.2f",rice);
	printf("\nSugar\t\tRs. %.2f",sugar);
	return(0);
}
