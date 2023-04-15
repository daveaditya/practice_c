//Program to read two numbers and check whether one is multiple of another or not.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int m,n,FLAG=0;
	printf("\nEnter two numbers: ");
	scanf("%d %d",&m,&n);
	for(int i=2;i<=100;i++) {
		if((n*i)==m) {
			FLAG=1;
			break;
		}
	}
	if(FLAG==1) {
		printf("\n%d is a multiple of %d.",n,m);
	}
	else {
		printf("\n%d is not a multiple of %d.",n,m);
	}
	return(0);
}
