/*
 * Modify program 6.16 to print the character O instead of S at the center of the square as shown below.
 *
 * S S S S S
 * S S S S S
 * S S O S S
 * S S O S S
 * S S S S S
 *
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char ch='S';
	int lines;
	printf("Enter the number of lines: ");
	scanf("%d",&lines);
	for(int i=1;i<=lines;i++) {
		for(int j=1;j<=lines;j++) {
			int mid=(lines/2)+1;
			if(mid==i && mid==j) {
				printf("%c ",'O');
			}
			else {
				printf("%c ",ch);
			}
		}
		printf("\n");
	}
	return(0);
}
