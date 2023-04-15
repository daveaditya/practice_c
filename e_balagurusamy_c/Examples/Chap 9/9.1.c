//Program with multiple functions that do not communicate any data between them.
#include<stdio.h>

void printline(void);
void value(void);

int main(int argc,char ** argv) {
	//Your code here.
	printline();
	value();
	printline();
	return(0);
}

void printline(void) {
	int i;
	for(i=1;i<=35;i++) {
		printf("%c",'-');
	}
	printf("\n");
}

void value(void) {
	int year,period;
	float inrate,sum,principal;

	printf("\nPrincipal amount?");
	scanf("%f",&principal);
	printf("\nInterest rate?");
	scanf("%f",&inrate);
	printf("\nPeriod?");
	scanf("%d",&period);

	sum=principal;
	year=1;
	while(year<=period) {
		sum=sum*(1+inrate);
		year=year+1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);
}
