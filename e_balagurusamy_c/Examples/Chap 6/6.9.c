//A program to evaluate the series 1/(1-x)=1+x+x^2+...+x^n.
#include<stdio.h>
#define LOOP 100
#define ACCURACY 0.0001

int main(int argc,char ** argv) {
	//Your code here.
	int n;
	float x,term,sum;
	printf("Input value of x: ");
	scanf("%f",&x);
	sum=0;
	for(term=1,n=1;n<=LOOP;n++) {
		sum+=term;
		if(term<=ACCURACY) {
			goto output;
		}
		term*=x;
	}
	printf("\nFinal value of N is not sufficient\n");
	printf("To achieve desired accuracy\n");
	goto end;
output:
	printf("Exit form the Loop\n");
	printf("Sum= %f; No. of terms= %d\n",sum,n);
end:
	;
	return(0);
}
