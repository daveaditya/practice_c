//Write a program, which reads your name fromt he keyboard and outputs a list of ASCII
//codes, whihc represent your name.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char name[15];
	printf("Enter your name: ");
	gets(name);
	for(int i=0;name[i]!='\0';i++) {
		printf("%d   ",name[i]);
	}
	return(0);
}
