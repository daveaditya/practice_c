//Program to calculate area of triangle using Hero's Formula A=sqrt(s*(s-a)*(s-b)*(s-c) where 2*s=a+b+c)
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a,b,c,S,A;
	printf("\nEnter the values of a, b and c :");
	scanf("%f %f %f",&a,&b,&c);
	S=(a+b+c)/2;
	A=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("\nThe area of triangle is %f.",A);
	return(0);
}
