//Program to find distance between two coordinates using D^2=(x2-x1)^2+(y2-y1)^2.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int x1,y1,x2,y2;
	float D;
	printf("\nEnter the first coordinates : ");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the second coordinates : ");
	scanf("%d %d",&x2,&y2);
	D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("\nThe distance between (%d,%d) and (%d,%d) is %f.",x1,y1,x2,y2,D);
	return(0);
}
