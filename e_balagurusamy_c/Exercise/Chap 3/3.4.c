//Program to obtain length and width of a rectangle from the user and print its area and perimeter.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float len,wid,area,peri;
	printf("\nEnter the leanth of the rectangle: ");
	scanf("%f",&len);
	printf("\nEnter the width of the rectangle: ");
	scanf("%f",&wid);
	peri=2*(len+wid);
	area=len*wid;
	printf("\nThe area is %f sq. unit, and the perimeter is %f unit.",area,peri);
	return(0);
}
