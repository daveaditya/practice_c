//Write a program to reverse the first n character in a file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char ** argv) {
	//Your code here.
	FILE *fs;
	char str[100];
	int i,n,j;

	if(argc!=3) {
		puts("Improper number of arguments.");
		exit(0);
	}

	n=atoi(argv[2]);
	fs=fopen(argv[1],"r");
	if(fs==NULL) {
		printf("Source file cannot be opened.");
		exit(0);
	}

	i=0;
	while(1) {
		if((str[i]=fgetc(fs))!=EOF) {
			j=i+1;
		}
		else {
			break;
		}
	}
	fclose(fs);

	fs=open(argv[1],"w");
	if(n<0 || n>strlen(str)) {
		printf("Incorect value of n. Program will terminate...\n\n");
		//getch();
		exit(1);
	}

	j=strlen(str);
	for(i=1;i<=n;i++) {
		fputc(str[j],fs);
		j--;
	}
	fclose(fs);

	printf("\n%d characters of teh file successfully printed in reverse order",n);
	return(0);
}
