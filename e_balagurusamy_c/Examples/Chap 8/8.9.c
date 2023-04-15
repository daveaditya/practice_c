/*
s1, s2, and s3 are three string variables. Write a program to read two string constants into s1 and s2 and compare whether they are equal or not.
If they are not join them together. Then copy the contents of s1 to the variable s3.
At the end, the program should print the contents of all three variables and their lengths.
*/
#include<stdio.h>
#include<string.h>

int main(int argc,char ** argv) {
	//Your code here.
	char s1[20],s2[20],s3[20];
	int x,l1,l2,l3;
	printf("\n\nEnter two string constant ?\n");
	scanf("%s %s",s1,s2);

	x=strcmp(s1,s2);
	if(x!=0) {
		printf("\n\nStrings are not equal\n");
		strcat(s1,s2);
	}
	else {
		printf("\n\nStrings are equal\n");
	}

	strcpy(s3,s1);

	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);

	printf("\ns1 = %s\t length = %d characters\n",s1,l1);
	printf("s2 = %s\t length = %d characters\n",s2,l2);
	printf("s3 = %s\t length = %d characters\n",s3,l3);
	return(0);
}
