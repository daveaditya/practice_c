//Program to read the following numbers, round them off to the nearest integers and print out the result in integer form.
// 35.7  50.21  -23.73  -46.45

#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a;
	printf("Enter number: ");
	scanf("%f",&a);
	int result=ceil(a);
	printf("The round value is %d.",result);
	return(0);
}
