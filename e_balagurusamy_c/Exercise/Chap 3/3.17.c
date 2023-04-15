//Program to print sin and cos functions from 0 to 180 in increments of 15.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	double rad;
	printf("\nX(Degree)\tsin(x)\t\tcos()");
	for(int i=0;i<=180;i=i+15) {
		rad=i/180.0;
		printf("\n%d\t\t%f\t%f",i,sin(rad),cos(rad));
	}
	return(0);
}
