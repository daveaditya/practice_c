//Programt o display equation of a line of the for ax+by=c.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c;
	printf("\nEnter the value of a, b and c : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nThe equation of line is %dx + %db = %d",a,b,c);
	return(0);
}
