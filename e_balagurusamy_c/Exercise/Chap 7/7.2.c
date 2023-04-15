/*
 * The daily maximum temperatures recorded in 10 cities during the month of
 * January (for all 31 days have been tabulated as follows:
 * 			City
 * Day		1		2		3		...		10
 * 1
 * 2
 * 3
 * .
 * .
 * .
 * 31
 *
 * Write a program to read the table elements int o a two-dimensional array
 * temperature, and to find the city and day corresponding to
 * a. the highest temperature and
 * b. the lowest temperature.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float temperature[31][10],max=temperature[0][0],min=temperature[0][0];
	int iMax=0,iMin=0;
	printf("Enter the elements: ");
	for(int i=0;i<31;i++) {
		for(int j=0;j<10;j++) {
			printf("\nEnter temperature of %d city, day %d : ",j+1,i+1);
			scanf("%d",temperature[i][j]);
			if(temperature[i][j]>max) {
				iMax=i;
			}
			if(temperature[i][j]<min) {
				iMin=i;
			}
		}
	}
	printf("\n%d city has highest temperature of %f",iMax+1,max);
	printf("\n%d city has lowest temperature of %f",iMin+1,min);
	return(0);
}
