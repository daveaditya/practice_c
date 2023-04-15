//Program to print division of two float numbers entered from keyboard.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a,b,result;
	printf("\nEnter two numbers : ");
	scanf("%f %f",&a,&b);
	result=a/b;
	printf("\nThe result of %f / %f is %f",a,b,result);
	return(0);
}
