//Program to read numbers until 0 is entered, and then display the total number of positive and negative numbers entered.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x,pos=0,neg=0;
	while(x!=0) {
		printf("\nEnter a number [Enter zero to terminate] : ");
		scanf("%d",&x);
		if(x>0) {
			pos++;
		}
		else if(x<0) {
			neg++;
		}
	}
	printf("\nPositive numbers : %d, and negative numbers : %d",pos,neg);
	return(0);
}
