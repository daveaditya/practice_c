/*
 * Given are two one-dimensional arrays A and B which are sorted in ascending order.
 * Write a program to merge them into a single sorted array C that contains
 * every item from arrays A and B, in ascending order.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int A[10]={1,12,20,55,70,65,80,84,99,100};
	int B[10]={-10,0,21,32,46,51,68,75,86,96};
	int C[20];
	int j=0,k=0;
	for (int i = 0; i < 20;i++) {
		if (j < 10 && k < 10) {
			if (A[j] < B[k]) {
				C[i] = A[j];
				j++;
			}
			else {
				C[i] = B[k];
				k++;
			}
			i++;
		}
		else if (j == 10) {
			for (;i < 20;) {
				C[i] = B[k];
				k++;
				i++;
			}
		}
		else {
			for (; i < 20;) {
				C[i] = A[j];
				j++;
				i++;
			}
		}
	}
	printf("\nElements in C array : \n");
	for(int i=0;i<20;i++) {
		printf("%d\t",C[i]);
	}
	return(0);
}
