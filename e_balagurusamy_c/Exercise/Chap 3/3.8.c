//Program to find distance travelled by a vehicle using distance = ut +(at^2)/2.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int t;
	float d,u,a;
	printf("\nEnter the values of u, a, t :");
	scanf("%f %f %d",&u,&a,&t);
	d=(u*t)+((1/2.0)*(a*t*t));
	printf("\nThe distance is %f",d);
	return(0);
}
