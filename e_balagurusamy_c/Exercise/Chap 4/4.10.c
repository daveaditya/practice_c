//Write a program to read and display the following table of data.
//Name		Code		Price
//Fan		67831		1234.50
//Motor		450			5786.70
//The name and code must be left-justified and price must be right-justified
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int n,code[10];
	float price[10];
	char name[10][10];
	printf("Enter the number of items: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("\nEnter %d item...",i+1);
		printf("\nEnter item name: ");
		scanf("%s",name[i]);
		printf("\nEnter item code and price: ");
		scanf("%d",&code[i]);
		printf("\nEnter price: ");
		scanf("%f",&price[i]);
	}
	printf("\n\nThe entered items are: ");
	printf("\nName\tCode\tPrice\n");
	for(int i=0;i<n;i++) {
		printf("\n%-5s \t%-5d \t%.2f",name[i],code[i],price[i]);
	}
	return(0);
}
