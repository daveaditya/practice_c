//Program to calculate squares and square roots of numbers form 0 to 100 in steps of 10.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("\nNumber\tSquae Root\tSquare");
	for(int i=0;i<=100;i++) {
		printf("\n%d\t%f\t%.0f",i,sqrt(i),pow(i,2));
	}
	return(0);
}
