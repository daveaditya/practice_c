/*
 * Admission to a professional course is subject to the following conditions:
 *
 * a. marks in mathematics>=60,
 * b. marks in physics >= 50,
 * c. marks in chemistry >= 40
 * d. total in all three subjects >=200
 * or
 * total in mathematics and physics >= 200
 * Givwen the marks in three subjects, write a program to process the appilcation to list the eligible candidates
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float math,physics,chemistry,total;
	printf("Enter the marks of Mathematics: ");
	scanf("%f",&math);
	printf("\nEnter the marks of Physics: ");
	scanf("%f",&physics);
	printf("\nEnter the marks of Chemistry: ");
	scanf("%f",&chemistry);
	total=math+physics+chemistry;
	if((math>=60) && (physics>=50) && (chemistry>=40) && ((total>=200)||((math+physics)>=150)) ) {
		printf("\nEligible for admission...!");
	}
	else {
		printf("\nSorry not eligible for admission.");
	}
	return(0);
}
