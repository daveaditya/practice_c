/*
 * Write a program to evaluate the following investment equation
 * V=P(1+r)^n
 * and print the tables which would give the values of V for various combitation of the following
 * values of P, r, and n.
 * P: 1000,2000,...,10000
 * r=0.10,0.11,...,0.20
 * n=1,2,...10
 *
 * (Hint: P is the principal amount and V is the value of money at the end of n years, This equation can be recursively written as
 *
 * V=P(1+r)
 * P=V
 *
 * That is, the value of money at the end of first year becomes the principal amount
 * for the next year ans so on.)
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float P,V,r,n;
	printf("\nEnter the rate of interest: ");
	scanf("%f",&r);
	for(int i=1000;i<=10000;i+=1000) {
		P=i;
		for(int j=1;j<=10;j++) {
			n=j;
			V=P*pow(1+r,n);
			printf("\nP: %.2f, and n: %.2f, and V: %.2f",P,n,V);
		}
	}
	return(0);
}
