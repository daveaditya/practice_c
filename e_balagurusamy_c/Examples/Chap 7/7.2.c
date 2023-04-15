/*
Given below is th4e list of marks obtained by a class of 50 students in an annual examination

40 65 51 27 79 11 56 61 85 09 25 36 09 49 55 63 74 81 49 37
40 49 16 75 87 91 33 24 58 78 65 56 76 67 45 54 36 63 12 21
73 49 51 19 39 49 68 93 85 59

Write a program to count he number of students belonging to each of following groups of marks: 0-9, 10-19, ..., 100
*/
#include<stdio.h>
#define MAXVAL 50
#define COUNTER 11

int main(int argc,char ** argv) {
	//Your code here.
	float value[MAXVAL];
	int i,low,high;
	int group[COUNTER]={0,0,0,0,0,0,0,0,0,0};

	for(i=0;i<MAXVAL;i++) {
		scanf("%f",&value[i]);
		++group[(int)(value[i])/10];
	}

	printf("\n");
	printf("GROUP     RANGE     FREQUENCY\n\n");
	for(i=0;i<COUNTER;i++) {
		low=i*10;
		if(i==10) {
			high=100;
		}
		else {
			high=low+9;
		}
		printf("%2d %3d to %3d %3d\n",i+1,low,high,group[i]);
	}
	return(0);
}
