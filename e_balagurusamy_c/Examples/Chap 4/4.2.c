//Request the user to enter a character and displays a message on the screen telling the user whether the charcter is alphabet or digit, or any other special character.
#include<stdio.h>
#include<ctype.h>

int main(int argc,char ** argv) {
	//Your code here.
	char character;
	printf("Press any key\n");
	character=getchar();
	if(isalpha(character)>0) {
		printf("The character is a letter.");
	}
	else if(isdigit(character)>0) {
		printf("The character is a digit.");
	}
	else {
		printf("The character is not alphanumeric.");
	}
	return(0);
}
