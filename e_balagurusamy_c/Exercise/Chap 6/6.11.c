/*
 * Write a program that will read a positive integer and determine and print its binary equivalent.
 * (The bits of the binary representaion fo an integer can be genereated by repeatedly dividing
 * the number and the successive quotients by 2 and saving the remainder which is either 0 or 1,
 * after each division.)
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int last,temp,num,i=0;
	char binary[10]={0,0,0,0,0,0,0,0,0,0};
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0) {
		last=temp%2;
		if(last==0) {
			binary[i]='0';
		}
		else {
			binary[i]='1';
		}
		temp=temp/2;
		i++;
	}
	printf("\nNumber : %d, Binary: %s",num,binary);
	return(0);
}
