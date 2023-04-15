/*
A survey to know the popularity of four cars (Ambassador,Fiat,Dolphin and Maruti) was conducted in four cities (Bombay, Calcutta, Delhi and Madras).
Each person surveyed was asked to give his city and type of car he was using.
The results, in the coded form, are tabulated as follows:

M 1 C 2 B 1 D 3 M 2 B 4
C 1 D 3 M 4 B 2 D 1 C 3
D 4 D 4 M 1 M 1 B 3 B 3
C 1 C 1 C 2 M 4 M 4 C 2
D 1 C 2 B 3 M 1 B 1 C 2
D 3 M 4 C 1 D 2 M 3 B 4

Codes represent the following information:

M-Madras	1-Ambassador
D-Delhi		2-Fiat
C-Calcuta	3-Dolphin
B-Bombay	4-Maruti

Write a rpogram to produce a table showing popularity of various cars in four cities.
*/
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int i,j,car;
	int frequency[5][5]={{0},{0},{0},{0},{0}};
	char city;
	printf("For each person, enter the city code \n");
	printf("followed by the car code.\n");
	printf("Enter the letter X to indicate end.\n");

	for(i=1;i<100;i++) {
		scanf("%c",&city);
		if(city=='X') {
			break;
		}
		scanf("%d",&car);
		switch(city) {
			case 'B':
				frequency[1][car]++;
				break;
			case 'C':
				frequency[2][car]++;
				break;
			case 'D':
				frequency[3][car]++;
				break;
			case 'M':
				frequency[4][car]++;
				break;
		}
	}

	printf("\n\n");
	printf("POPULARITY TABLE\n\n");
	printf("---------------------------------------\n");
	printf("City Ambassador Fiat Dolphin Maruti\n");
	printf("---------------------------------------\n");
	for(i=1;i<=4;i++) {
		switch(i) {
			case 1:
				printf("Bombay     ");
				break;
			case 2:
				printf("Calcutta     ");
				break;
			case 3:
				printf("Delhi     ");
				break;
			case 4:
				printf("Madras     ");
				break;
		}
	}
	for(j=1;j<=4;j++) {
		printf("%7d",frequency[i][j]);
		printf("\n");
	}
	printf("---------------------------------------\n");
	return(0);
}
