//Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and
//to display the same in the following format using the printf statement.
//a. ANIL K. GUPTA
//b. A.K. GUPTA
//c. GUPTA A.K.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char s1[5]="ANIL";
	char s2[6]="KUMAR";
	char s3[6]="GUPTA";
	printf("\na. %s %.1s. %s",s1,s2,s3);
	printf("\nb. %.1s. %.1s. %s",s1,s2,s3);
	printf("\nc. %s %.1s. %.1s.",s3,s1,s2);
	return(0);
}
