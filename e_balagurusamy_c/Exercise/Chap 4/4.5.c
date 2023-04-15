//Write an interactive program to demonstrate the process of multiplication. The program should
//ask the user to enter two-digit integers and print the product of integers as shown below.
//		45
//X		37
//________
//7x45 is 315
//3x45 is 135
//Add them 1665
//________
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b;
	printf("Enter first two digit number: ");
	scanf("%d",&a);
	printf("\nEnter second two digit number: ");
	scanf("%d",&b);
	int temp=b%10;
	printf("\n\t\t%d",a);
	printf("\n\tx\t%d",b);
	printf("\n\t_______________");
	int res1=temp*a;
	printf("\n%dx%d is %10d",temp,a,res1);
	temp=(b/10)%10;
	int res2=temp*a*10;
	printf("\n%dx%d is %10d",temp,a,res2);
	int sum=res1+res2;
	printf("\nAdd them %9d",sum);
	printf("\n\t_______________");
	return(0);
}
