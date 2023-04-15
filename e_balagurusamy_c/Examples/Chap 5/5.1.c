//The rpogam read four values a,b,c, and d fromt he terminal and evaluates the raio of (a+b) to (c-d) and prints the result, if c-d is not equal to zero
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c,d;
	float ratio;
	printf("Enter four integer values: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if((c-d)!=0) {
		ratio=(float)(a+b)/(float)(c-d);
		printf("\nRatio=%f",ratio);
	}
	return(0);
}
