//write a program to read data from the keyboard, write it to a file called INPUT, again read the same data from
//the INPUT file, and display it on the screen.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	FILE *f1;
	char c;
	printf("Data Input\n\n");

	f1=fopen("INPUT","w");

	while((c=getchar())!=EOF) {
		putc(c,f1);
	}

	fclose(f1);

	printf("\nData Output\n\n");

	f1=fopen("INPUT","r");

	while((c=getc(f1))!=EOF) {
		printf("%c",c);
	}

	fclose(f1);

	return(0);
}
