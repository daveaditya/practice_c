//Program to read three numbers and print their sum,avg,largest, adn smallest values.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int a,b,c,sum;
	float avg;
	printf("\nEnter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("\nThe sum is %d.",sum);
	avg=sum/3;
	printf("\nThe average is %f.",avg);
	((a>b)&&(a>c)) ? printf("\nThe largest number is %d.",a) : (b>c) ? printf("\nThe largest number is %d.",b) : printf("\nThe largest number is %d.",c) ;
	((a<b)&&(a<c)) ? printf("\nThe smallest number is %d.",a) : (b<c) ? printf("\nThe smallest number is %d.",b) : printf("\nThe smallest number is %d.",c) ;
	return(0);
}
