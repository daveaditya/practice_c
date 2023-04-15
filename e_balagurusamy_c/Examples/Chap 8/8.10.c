//Program that readsa a string and prints if it is a palindrome or not.
#include<stdio.h>
#include<string.h>

int main(int argc,char ** argv) {
	//Your code here.
	char chk='t',str[30];
	int len,left,right;
	pritnf("\nEnter a string");
	sacnf("%s",&str);
	len=strlen(str);
	left=0;
	right=len-1;
	while(left<right && chk=='t') {
		if(str[left] == str[right]) {
		;
		}
		else
		{
			chk='f';
		}
		left++;
		right--;
	}
	if(chk=='t') {
		printf("\nThe string %s is a palindrome",str);
	}
	else {
		printf("\nThe string %s is nt a plaindrome.",str);
	}
	return(0);
}
