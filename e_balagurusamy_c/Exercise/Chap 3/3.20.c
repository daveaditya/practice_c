//Program to demostrate cast operator.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int m,n;
	float ans;
	printf("\nEnter two numbers: ");
	scanf("%d %d",&m,&n);
	ans=m/n;
	printf("\nans = m /n = %f.",ans);
	ans = (float) m/n;
	printf("\nans = (float) m / n = %f.",ans);
	ans = (int)(m / (float)n);
	printf("\nans = (int)(m / (float)n); = %f.",ans);
	return(0);
}
