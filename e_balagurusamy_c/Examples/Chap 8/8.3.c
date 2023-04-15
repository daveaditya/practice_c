//Program to copy one string into another and count the number of chracters copied.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char string1[80],string2[80];
	int i;
	printf("Enter a string\n");
	printf("?");
	scanf("%s",string2);
	for(i=0;string2[i]!='\0';i++) {
		string1[i]=string2[i];
	}
	string1[i]='\0';
	printf("\n");
	printf("%s\n",string1);
	printf("Number of characters=%d\n",i);
	return(0);
}
