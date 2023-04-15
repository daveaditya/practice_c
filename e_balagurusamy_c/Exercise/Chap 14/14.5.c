/*
 * Using the macro defined in 14.4, write a program to compute the sum of all elements
 * in an array.
 */
#include<stdio.h>

#define ARRAY(arr,len,sum) {	\
	sum=0;						\
	for(int i=0;i<len;i++) { 	\
		printf("%d\t",arr[i]);	\
		sum=arr[i]+sum;			\
	}							\
}

int main(int argc,char ** argv) {
	//Your code here.
	int arr[5]={1,2,3,4,5};
	int sum=0;
	ARRAY(arr,5,sum);
	printf("\nSum is %d",sum);
	return(0);
}
