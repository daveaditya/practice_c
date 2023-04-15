/*
 * Write a program to do the following:
 * a. To output the question "Who is the inventor of C?".
 * b. To accept an answer.
 * c. To output "Good" and then stop, if the answer is correct.
 * d. To output "try again" and then stop, if the answer is wrong.
 * e. To output the correct answer when the anser is wrong even at the third attempt and stop.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int FLAG=0,count=0;
	char answer[]="Dennis Ritchie";
	char input[17];
	while(1) {
		printf("Who is the inventor of C ? \n");
		gets(input);
		for(int i=0;input[i]!='\0';i++) {
			if(input[i]!=answer[i]) {
				FLAG=1;
				count++;
				break;
			}
		}
		if(count>=3) {
			printf("Correct answer is : Dennis Ritchie");
			break;
		}
		if(FLAG==1) {
			printf("Try again...");
		}
		else {
			printf("Good");
			break;
		}
	}

	return(0);
}
