//Program to illustrate continue statement.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count,negative;
	double number,sqroot;
	printf("Enter 9999 to STOP\n");
	count=0;
	negative=0;
	while(count<=100) {
		printf("Enter a number: ");
		scanf("%lf",&number);
		if(number<0) {
			printf("Number if negative\n\n");
			negative++;
			continue;
		}
		sqroot=sqrt(number);
		printf("Number      = %lf\n Square root = %lf\n\n",number,sqroot);
		count++;
	}
	printf("Number of items done= %d\n",count);
	printf("\n\nNegative items = %d\n",negative);
	printf("END OF DATA\n");
	return(0);
}
