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
	double prev,num,cos,term;
	int count=2,factorial=1,FLAG=1;
	printf("Enter a number: ");
	scanf("%lf",&num);
	cos=1;
	while(1) {
		prev=cos;
		for(int i=count;i>0;i--) {
			factorial=factorial*i;
		}
		term=pow(num,count)/(double)factorial;
		if(FLAG==1) {
			cos=cos+(-1*term);
			FLAG=0;
		}
		else {
			cos=cos+term;
			FLAG=1;
		}
		factorial=1;
		count=count+2;
		if((fabs(cos-prev))<ACCURACY) {
			break;
		}
	}
	printf("\ncos ( %.2lf ) = %lf",num,cos);
	return(0);
}
