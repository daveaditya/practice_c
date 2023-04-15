//Given the values of variable x,y, and z, write a program to rotate their values such that x has the value of y, y has the value of z, and z has the value of x.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x,y,z;
	printf("\nEnter three numbers : ");
	scanf("%d %d %d",&x,&y,&z);
	printf("\nx = %d, y = %d, z = %d.",x,y,z);
	int temp;
	temp=y;
	y=z;
	z=x;
	x=temp;
	printf("\nAfter swapping, x=%d, y=%d, and z=%d",x,y,z);
	return(0);
}
