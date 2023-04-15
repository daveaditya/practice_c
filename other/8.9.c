/*
 * Write a program that reads the cost of an item in the form RRRR.P (where RRRR
 * denotes rupees and the PP denotes paise) and converts the value to a string of words that
 * expresses the numeric value in words. For example, if we input 125.75, the output should be
 * "ONE HUNDRED TWENTY FIVE AND PAISE SEVENTY FIVE".
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
////	int flagUnits = 0, flagTens = 0, flagHun = 0, flagThou = 0;
//
//	char strUnits[10][] = {
//			"One", "Two", "Three", "Four","Five", "Six", "Seven", "Eight", "Nine", "Ten"
//	};
//
//	char strTens[10][] = {
//			"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
//	};
//
//	char strTens2[10][] = {
//			"Twenty", "Thirty", "Fourty", "Fifity", "Sixty", "Seventy", "Eighty", "Ninty"
//	};

	char number[8];
	printf("Enter a number : ");
	gets(number);

	int dotPos = 0, length = 0, fraction = 0, num = 0;
	for(int i=0;number[i] != '\0';i++) {
		length++;
		if(number[i] == '.') {
			dotPos = i;
		}
	}
	length--;
	num = length - dotPos;
	fraction = length - (num + 1);

	printf("length : %d",length);
	printf("\ndotPos : %d",dotPos);
	printf("\nfraction : %d",fraction);
	printf("\nnum : %d",num);

	return(0);
}
