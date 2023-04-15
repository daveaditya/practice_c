/*
 * Define a macro that receives an array and the number of elements in the
 * arrray as arguments. Write a program using this macro to print out the
 * elements of an array.
 */
#include<stdio.h>

#define ARRAY(arr,len) {			\
		for(int i=0;i<len;i++) { 	\
			printf("%d\t",arr[i]);	\
		}							\
}

int main(int argc,char ** argv) {
	//Your code here.
	int arr[5]={1,2,3,4,5};
	ARRAY(arr,5);
	return(0);
}
