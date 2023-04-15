/*
 * Write a program to graph the function
 * 				y=sin(x)
 * in the interval 0 to 180 degrees in steps of 15 degrees.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	for(int i=0;i<=180;i+=15) {
		printf("y=sin(%d) = %lf\n",i,sin(i));
	}
	return(0);
}
