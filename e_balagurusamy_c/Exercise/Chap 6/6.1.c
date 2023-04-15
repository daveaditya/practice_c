//Given a number, write a program using while loop to reverse the digits of the number.
//For example, the number 12345
//should be written as 54321
//(Hint: Use modulus opoerator to extract the last digit and th einteger divions by 10 to get hte n-1 digit number fromt he n digit number.)
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,temp,rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0) {
		rev=rev*10+(temp%10);
		temp=temp/10;
	}
	printf("\nThe reverse of %d is %d.",num,rev);
	return(0);
}
