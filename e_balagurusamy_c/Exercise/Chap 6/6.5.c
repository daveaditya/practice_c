//Rewrite the program of the example 6.1 using the for statement.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,temp,rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	for(;temp>0;) {
		rev=(rev*10)+(temp%10);
		temp=temp/10;
	}
	printf("The reverse of %d is %d.",num,rev);
	return(0);
}
