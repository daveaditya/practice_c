//Program to display a pyramid.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,i,y,x=40;
	printf("\nEnter a number for \ngenerating the pyrmid:\n");
	scanf("%d",&num);
	for(y=0;y<=num;y++) {
		gotoxy(x,y+1);
		for(i=0-y;i<=y;i++) {
			printf("%3d",abs(i));
			x=x-3;
		}
	}
	return(0);
}
