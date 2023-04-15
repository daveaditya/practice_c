/*
 * Develop a program to implement the binary search algorithm. This technique
 * compare the search key value with the value of the element that is midway in a
 * "sorted list". Then:
 *
 * a. If they match, the search is over;
 * b. If the search key value is less than the middle value, then the first
 *    half of the list contains the key value.
 * c. If the search key value is greater than the midle value, then the second
 *    half contains the key value.
 *
 * Repeat this "divide-and-conquer" strategy until we have a match.
 * If the list is reduced to one non-matching element, then the list does not
 * contain the key value.
*/
#include<stdio.h>

int binarySearch(int array[],int size,int key);

int main(int argc,char ** argv) {
	//Your code here.
	int A[9]={1,2,3,4,5,6,7,8,9};
	int key=11;
	if(binarySearch(A,10,key)) {
		printf("\nElement found!");
	}
	else {
		printf("\nElement is not present in array.");
	}
	return(0);
}

int binarySearch(int array[],int size,int key) {
	int mid=size/2-1;
	if(array[mid]==key) {
		return(1);
	}
	else if(key>array[mid]) {
		binarySearch(array,mid+1,key);
	}
	else if(key<array[mid]) {
		binarySearch(array,mid-1,key);
	}
	else {
		return(0);
	}
}
