//Program to read a line of text containing a series of words from the terminal.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char line[81],character;
	int c;
	c=0;
	printf("Enter text. Press <Return> at end\n");
	do {
		character=getchar();
		line[c]=character;
		c++;
	} while(character!='\n');
	return(0);
	c=c-1;
	line[c]='\0';
	printf("\n%s\n",line);
}
