//A set of two linear equations with two unknows x1 and x2 is given below:
//ax1 + bx2 = m
//cx1 + bx2 = n
//The set has a unique solution
//x1= (md-bn)/(ad-bc)
//x2= (na-mc)/(ad-cb)
//provided the denominator ad-cb is not equal to zero.
// Write a rpogram that will read the values of constants a,b,c,d,m and n and compute the values
//of x1 and x2. An appropriate message should be printed if ad-cb=0.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c,d,n,m;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	printf("\nEnter the value of c: ");
	scanf("%d",&c);
	printf("\nEnter the value of d: ");
	scanf("%d",&d);
	printf("\nEnter the value of m: ");
	scanf("%d",&m);
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	if(((a*d)-(c*b))==0) {
		printf("\nNo solution.");
		return(0);
	}
	else {
		float x1,x2;
		x1=((m*d)-(b*n))/((a*d)-(c*b));
		x2=((n*a)-(m*c))/((a*d)-(c*b));
		printf("\nThe soluiton is %.2f and %.2f",x1,x2);
	}
	return(0);
}
