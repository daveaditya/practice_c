/*
 * Write programs to evaluate teh following funcitons to 0.0001 accuracy.
 * a. sinx = x - x^3/3! + x^5/5! + ...
 * b. cosx = 1 - x^2/2! + x^4/4! + ...
 * c. SUM = 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + ...
 */
#include<stdio.h>
#include<math.h>
#define ACCURACY 0.0001

int main(int argc,char ** argv) {
	//Your code here.
	double num,sum=0;
	printf("Enter a number: ");
	scanf("%lf",&num);
	for(int i=1;i<=num;i++) {
		sum=sum+(pow((1/(double)i),i));
	}
	printf("\nSUM = %lf",sum);
	return(0);
}
