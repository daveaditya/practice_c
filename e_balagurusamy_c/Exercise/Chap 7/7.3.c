/*
 * An election is contested by 5 candidtes. The candidates are numbered 1 to 5
 * and the voting is done by making the candidate number on the ballot paper.
 * Write a program to read the ballots and copunt hte votes cast for each candidate using an array variable count.
 * In case, a number read is outside the rage 1 to 5, the ballot should be
 * considered as a 'spoilt ballot' and the program should also count
 * the number of spoilt ballots.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count[5]={0,0,0,0,0},countSpoilt=0;
	int ballot;
	int numberOfBallots;
	printf("Enter the number of ballots: ");
	scanf("%d",&numberOfBallots);
	for(int i=0;i<numberOfBallots;i++) {
		printf("Enter number from ballot paper: ");
		scanf("%d",&ballot);
		switch(ballot) {
			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			default:
				countSpoilt++;
		}
	}
	printf("Votes for candidate 1: %d",count[0]);
	printf("\nVotes for candidate 2: %d",count[1]);
	printf("\nVotes for candidate 3: %d",count[2]);
	printf("\nVotes for candidate 4: %d",count[3]);
	printf("\nVotes for candidate 5: %d",count[4]);
	printf("\nSpoilt ballots: %d",countSpoilt);
	return(0);
}
