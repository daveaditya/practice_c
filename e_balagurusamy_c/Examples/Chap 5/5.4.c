//The rpogram selects and prints the largest of the three number using nested if...else statements.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float A,B,C;
	printf("Enter three value: ");
	scanf("%f %f %f",&A,&B,&C);
	printf("\nThe largest value is ");
	if(A>B) {
		if(A>C) {
			printf("%f\n",A);
		}
		else {
			printf("%f\n",C);
		}
	}
	else {
		if(B>C) {
			printf("%f\n",B);
		}
		else {
			printf("%f\n",C);
		}
	}
	return(0);
}
