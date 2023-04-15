//A program to evaluate e^x. It uses if...else to test the accuracy.
#include<stdio.h>
#define ACCURACY 0.0001

int main(int argc,char ** argv) {
	//Your code here.
	int n,count;
	float x,term,sum;
	printf("\nEnter value of x: ");
	scanf("%f",&x);
	n=term=sum=count=1;
	while(n<=100) {
		term=term*x/n;
		sum=sum+term;
		count=count+1;
		if(term<ACCURACY) {
			n=999;
		}
		else {
			n=n+1;
		}
	}
	printf("\nTerms=%d Sum=%f\n",count,sum);
	return(0);
}
