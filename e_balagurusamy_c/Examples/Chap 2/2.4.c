//Intereset claculation using scanf.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int year,period;
	float amount,inrate,value;

	printf("Input amount,interest rate, and period\n\n");
	scanf("%f %f %d",&amount,&inrate,&period);
	printf("\n");
	year=1;

	while(year<=period) {
		value=amount+inrate*amount;
		printf("%2d Rs %8.2f\n",year,value);
		amount=value;
		year=year+1;
	}
	return(0);
}
