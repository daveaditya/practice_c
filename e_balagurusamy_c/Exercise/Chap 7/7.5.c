/*
 * The annuall examination results of 100 students are tabulated as follows:
 *
 * Roll No. 	Subject 1		Subject 2		Subject 3
 * .
 * .
 * .
 *
 * Write a program to read the data and determine the following:
 * a. Total marks obtained by each student.
 * b. The highest marks in each subject and the Roll No. of the studetn who secured it.
 * c. The student who obtained the highest total marks.
 *
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int rollNo[100],noOfStudents;
	float subject[100][3];
	float total[100],highestInSubject[3]={0,0,0},highestInSubjectRollNo[3]={0,0,0};
	float totalHighest=0,totalHighestRollNo=0;
	printf("Enter the number of students: ");
	scanf("%d",&noOfStudents);
	for(int i=0;i<noOfStudents;i++) {
		printf("\nEnter roll number: ");
		scanf("%d",&rollNo[i]);
		total[i]=0;
		for(int j=0;j<3;j++) {
			printf("\nEnter marks of Subject %d: ",j+1);
			scanf("%f",&subject[i][j]);
			total[i]=total[i]+subject[i][j];
			if(highestInSubject[j] < subject[i][j]) {
				highestInSubject[j]=subject[i][j];
				highestInSubjectRollNo[j]=rollNo[i];
			}
		}
		if(totalHighest < total[i]) {
			totalHighest=total[i];
			totalHighestRollNo=rollNo[i];
		}
	}
	for(int i=0;i<3;i++) {
		printf("\nHighest in subject %d : %.2f , Roll No. : %d",i+1,highestInSubject[i],highestInSubjectRollNo[i]);
	}
	printf("\nHighest total marks : %.2f , Roll No. : %d",totalHighest,totalHighestRollNo);
	return(0);
}
