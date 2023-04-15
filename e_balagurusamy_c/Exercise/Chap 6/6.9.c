/*
 * Rewrite the program of plotting two functions using else...if constructs instead
 * of continue statements.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int i;
	float a,x,y1,y2;
	a=0.4;
	printf("                     Y ------>                      \n");
	printf("0---------------------------------------------------\n");
	for(x=0;x<5;x++) {
		y1=(int)(50*exp(-a*x)+0.5);
		y2=(int)(50*exp(-a*x*x/2)+0.5);

		if(y1==y2) {
			if(x==2.5) {
				printf("X   |");
			}
			else {
				printf("|");
			}
			for(i=1;i<=y1-1;i++) {
				printf(" ");
			}
			printf("#\n");
		}

		else if(y1>y2) {
			if(x==2.5) {
				printf("X |");
			}
			else {
				printf("   |");
			}
			for(i=1;i<=y2-1;i++) {
				printf(" ");
				printf("*");
			}
			for(i=1;i<=(y1-y2-1);i++) {
				printf("-");
			}
			printf("0\n");
		}

		else if(x==2.5) {
			printf("X |");
		}
		else {
			printf("   |");
		}
		for(i=1;i<=(y1-1);i++) {
			printf(" ");
		}
		printf("0");
		for(i=1;i<=(y2-y1-2);i++) {
			printf("-");
		}
		printf("\n");
	}
	printf("   |n");
	return(0);
}
