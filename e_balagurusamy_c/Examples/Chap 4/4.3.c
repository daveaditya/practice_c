//A program that reads a character from keyboard and then prints it in reverse case.
#include<stdio.h>
#include<ctype.h>

int main(int argc,char ** argv) {
	//Your code here.
	char alphabet;
	printf("Enter an alphabet: ");
	putchar('\n');
	alphabet=getchar();
	if(islower(alphabet)) {
		putchar(toupper(alphabet));
	}
	else {
		putchar(tolower(alphabet));
	}
	return(0);
}
