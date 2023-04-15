//Program to find the number of vowels and consonants in a text string.
#include<stdio.h>
#include<string.h>

int main(int argc,char ** argv) {
	//Your code here.
	char str[30];
	int vow=0,cons=0,i=0;
	printf("Enter a string: ");
	gets(str);
	while(str[i]!='\0') {
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U') {
			vow++;
		}
		else {
			cons++;
		}
		i++;
	}
	printf("\nNumber of Vowels = %d",vow);
	printf("\nNumber of consonants = %d",cons);
	return(0);
}
