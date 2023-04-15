//Printing of characters and strings.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char x='A';
	char name[20]="ANIL KUMAR GUPTA";
	printf("OUTPUT OF CHARACTERS\n\n");
	printf("%c\n%3c\n%5c\n",x,x,x);
	printf("\n");
	printf("OUTPUT OF STRINGS\n\n");
	printf("%s\n",name);
	printf("%20s\n",name);
	printf("%20.10s\n",name);
	printf("%.5s\n",name);
	printf("%-20.10s\n",name);
	printf("%5s\n",name);
	return(0);
}
