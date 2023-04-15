/*
The names of employees of an organization are stored in three arrays, namely first_name, second_name
and last_name. Write a program to concatenate the three parts into one string to be called name.
*/
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int i,j,k;
	char first_name[10]="VISHWANATH";
	char second_name[10]="PRATAP";
	char last_name[10]="SINGH";
	char name[30];

	for(i=0;first_name[i]!='\0';i++) {
		name[i]=first_name[i];
	}
	name[i]=' ';

	for(j=0;second_name[j]!='\0';j++) {
		name[i+j+1]=second_name[j];
	}
	name[i+j+1]=' ';

	for(k=0;last_name[k]!='\0';k++) {
		name[i+j+k+2]=last_name[k];
	}
	name[i+j+k+2]='\0';

	printf("\n\n");
	printf("%s\n",name);
	return(0);
}
