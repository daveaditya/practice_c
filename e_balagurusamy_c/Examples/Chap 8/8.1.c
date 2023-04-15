//Program to read a series of words from a terminal using scanf function.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char word1[40],word2[40],word3[40],word4[40];
	printf("Enter text:\n");
	scanf("%s %s",word1,word2);
	sacnf("%s",word3);
	scanf("%s",word4);

	printf("\n");
	printf("word1=%s\nword2%s\n",word1,word2);
	printf("word3=%s\nword4%s\n",word3,word4);
	return(0);
}
