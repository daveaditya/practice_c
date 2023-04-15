/*
 * Define a structure type, struct personal that would contain person's name, date of joining and salary.
 * Using this structure, write a rpogram to read this information for one person from the keyboard and print
 * the same on the scree.
 */
#include<stdio.h>

struct personal {
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;
};

int main(int argc,char ** argv) {
	//Your code here.
	struct personal person;

	printf("Input values\n");
	scanf("%s %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
	printf("%s %d %s %f\n",person.name,person.day,person.month,person.year,person.salary);
	return(0);
}
