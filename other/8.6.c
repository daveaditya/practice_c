/*
 * Write a program to replace a particular word by another word in a given sring.
 * For examnple, the word PASCAL should be replaced by C in the text "It is good to program
 * in PASCAL language."
 */
#include <stdio.h>
#include <string.h>

int main(int argc,char ** argv) {
	//Your code here.
	char text[100],word[10],newl[10],newText[100];
	int countCh=0,count=0,len=0,newLen=0;
	int minLoc[10],maxLoc[10];
	printf("Enter a text : ");
	gets(text);
	printf("Enter a word to find its occurrences : ");
	gets(word);
	for(int i=0;word[i]!='\0';i++) {
		len++;
	}
	printf("Enter the new word: ");
	gets(newl);
	for(int i=0;newl[i]!='\0';i++) {
		newLen++;
	}
	int iMin=0,iMax=0;
	while(1) {
		int j=0;
		for(int i=0;text[i]!='\0';i++) {
			if(text[i]==word[j]) {
				if(text[i]==word[0]) {
					minLoc[iMin]=i;
				}
				countCh++;
				j++;
			}
			else {
				countCh=0;
				j=0;
			}
			if(countCh==len) {
				maxLoc[iMax]=i;
				countCh=0;
				count++;
				printf("\nMin loc : %d, and Max Loc : %d",minLoc[iMin],maxLoc[iMax]);
				iMin++;
				iMax++;
			}
		}
		break;
	}
	int changeTimes = iMax > iMin ? iMax : iMin;
	for(int i=0;i<minLoc[0];i++) {
		newText[i]=text[i];
	}
	int k=0;
	for(int i=minLoc[0];i!=maxLoc[0];i++) {
		newText[i]=newl[k];
		k++;
	}
	for(int i=maxLoc[0]+1;text[i]!='\0';i++) {
		newText[i]=text[i];
	}
//	while(iMin) {
//		for(int i=minLoc[m-iMin];i!=maxLoc[m-iMax];i++) {
//			newText[i]=newl[newLen-j];
//		}
//		for(int i=maxLoc[m-iMin]+1;text[i]!='\0';i++) {
//			newText[i]=text[i];
//		}
//		j--;
//		iMin--;
//	}
	printf("\n\nThe number of occurrences is: %d",count);
	printf("\nThe old string is : %s",text);
	printf("\nThe new string is : %s",newText);
	return(0);
}


/*

Enter a text : this is the world of world of world programming
Enter a word to find its occurrences : world

Min loc : 12, and Max Loc : 16
Min loc : 21, and Max Loc : 25
Min loc : 30, and Max Loc : 34

The number of occurrences is: 3

*/
