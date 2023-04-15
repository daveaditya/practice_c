//Program to read the values of x and y and print the results of the following expressions in one line:
//a. (x+y)/(x-y)
//b. (x+y)/2
//c. (x+y)(x-y)

#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float x,y;
	printf("Enter the value of x and y: ");
	scanf("%f %f",&x,&y);
	float res1=(x+y)/(x-y);
	float res2=(x+y)/2;
	float res3=(x+y)*(x-y);
	printf("res1 = %5.3f , res2 = %5.3f , res3 = %5.3f.",res1,res2,res3);
	return(0);
}
