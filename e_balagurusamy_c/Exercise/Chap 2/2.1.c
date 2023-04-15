//Program to find sum of harmonic series 1 + 1/2 + ... + 1/n.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int n;
	float sum=0.0;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		sum=sum+(1.0/i);
	}
	printf("\nThe sum of the series upto %d is %f.",n,sum);
	return(0);
}
