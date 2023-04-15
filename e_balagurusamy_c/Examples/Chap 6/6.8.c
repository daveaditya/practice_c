//Program to illustrate the use of break statement.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int m;
	float x,sum,average;
	printf("This program computes the averge of a set of number\n");
	printf("Enter values one after another\n");
	printf("Enter a NEGATIVE number at the end.\n\n");
	sum=0;
	for(m=1;m<=1000;m++) {
		scanf("%f",&x);
		if(x<0) {
			break;
		}
		sum+=x;
	}
	average=sum/(float)(m-1);
	printf("\n");
	printf("Number of value= %d\n",m-1);
	printf("Sum            = %f\n",sum);
	printf("Average        = %f\n",average);
	return(0);
}
