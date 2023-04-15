//Program to demonstrate use of typedef.
#include<stdio.h>
typedef int unit;
int main(int argc,char ** argv) {
	//Your code here.
	unit a;
	printf("\nEnter a value : ");
	scanf("%d",&a);
	printf("\nUnit a = %d",a);
	return(0);
}
