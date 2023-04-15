/*
 * Given a list of marks ranging from 0 to 100, wrtie a program to compute and print the number of student:
 *
 * a. who have obtained more than 80 marks.
 * b. who have obtained more than 60 marks.
 * c. who have obtained more than 40 marks.
 * d. who jave obtained 40 or less marks,
 * e. in the range 81 to 100.
 * f. in the range 61 to 80.
 * g. in the range 41 to 60, and
 * h. in the range 0 to 40.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int g80=0,g60=0,g40=0,l40=0,bt81to100=0,bt61to80=0,bt41to60=0,bt0to40=0;
	int n,marks;
	printf("Enter total number of entries: ");
	scanf("%d",&n);
	printf("\nEnter marks: ");
	for(int i=1;i<=n;i++) {
		scanf("%d",&marks);
		if(marks>80) {
			g80++;
		}
		if(marks>60) {
			g60++;
		}
		if(g40>40) {
			g40++;
		}
		if(g40<40) {
			l40++;
		}
		if(marks>=81 && marks<=100) {
			bt81to100++;
		}
		if(marks>=61 && marks<=80) {
			bt61to80++;
		}
		if(marks>=41 && marks<=60) {
			bt41to60++;
		}
		if(marks<=40) {
			bt0to40++;
		}
	}
	printf("\nNumber of students who obtained marks greater than 80: %d",g80);
	printf("\nNumber of students who obtained marks greater than 60: %d",g60);
	printf("\nNumber of students who obtained marks greater than 40: %d",g40);
	printf("\nNumber of students who obtained marks less than or equal to 40: %d",l40);
	printf("\nNumber of students who obtained marks in the range 81 to 100: %d",bt81to100);
	printf("\nNumber of students who obtained marks in the range 61 to 80: %d",bt61to80);
	printf("\nNumber of students who obtained marks in the range 41 to 60: %d",bt41to60);
	printf("\nNumber of students who obtained marks in the range 0 to 40: %d",bt0to40);
	return(0);
}
