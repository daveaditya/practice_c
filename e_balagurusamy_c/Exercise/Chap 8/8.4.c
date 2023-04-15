//Write a program which will read a text and count all occurrences of a particular word.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char text[100],word[10];
	int countCh=0,count=0,len=0;
	printf("Enter a text : ");
	gets(text);
	printf("Enter a word to find its occurrences : ");
	gets(word);
	for(int i=0;word[i]!='\0';i++) {
		len++;
	}
	while(1) {
		int j=0;
		for(int i=0;text[i]!='\0';i++) {
			if(text[i]==word[j]) {
				countCh++;
				j++;
			}
			else {
				countCh=0;
				j=0;
			}
			if(countCh==len) {
				countCh=0;
				count++;
			}
		}
		break;
	}
	printf("The number of occurrences is: %d",count);
	return(0);
}
