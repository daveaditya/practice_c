//Calculation of Average of Numbers.
#include<stdio.h>
#define N 10

int main(int argc,char ** argv) {
	//Your code here.
	int count;
	float sum,average,number;
	sum=0;
	count=0;
	while(count<N) {
		scanf("%f",&number);
		sum=sum+number;
		count=count+1;
	}
	average=sum/N;
	printf("N=%d Sum=%f",N,sum);
	printf(" Average=%f",average);
	return(0);
}
