//Program to scanf to float numbers and assign their sum to integer and display all three.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float x,y;
	int z;
	printf("\nEnter two float numbers : ");
	scanf("%f %f",&x,&y);
	z=x+y;
	printf("\nx = %f, y = %f, and z=%d",x,y,z);
	return(0);
}
