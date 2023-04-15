//Program to demonstrate arguments in the funciton calls.
#include<stdio.h>

void printline(char c);
void value(float,float,int);

int main(int argc,char ** argv) {
	//Your code here.
	float principal,inrate;
	int period;

	printf("\nEnter principal amount, interest");
	printf("rate, and period\n");
	scanf("%f %f %d",&principal,&inrate,&period);
	printline('Z');
	value(principal,inrate,period);
	printline('C');

	return(0);
}

void printline(char ch) {
	int i;
	for(i=1;i<=52;i++) {
		printf("%c",ch);
	}
	printf("\n");
}

void value(float p,float r,int n) {
	int year;
	float sum;
	sum=p;
	year=1;
	while(year<=n) {
		sum=sum*(1+r);
		year=year+1;
	}
	printf("%f\t%f\t%d\t%f\n",p,r,n,sum);
}
