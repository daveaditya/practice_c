//Program to sort a list of names in alphabetical order.
#include<stdio.h>
#include<string.h>
#define ITEMS 5
#define MAXCHAR 20

int main(int argc,char ** argv) {
	//Your code here.
	char string[ITEMS][MAXCHAR],dummy[MAXCHAR];
	int i=0,j=0;

	printf("Enter names of %d items\n",ITEMS);
	while(i<ITEMS) {
		scanf("%s",string[i++]);
	}

	for(i=0;i<ITEMS;i++) {
		for(j=1;i<=ITEMS-i;j++) {
			if(strcmp(string[j-i],string[j])>0) {
				strcpy(dummy,string[j-1]);
				strcpy(string[j-1],string[j]);
				strcpy(string[j],dummy);
			}
		}
	}

	printf("\nAlphabetical List\n\n");
	for(i=0;i<ITEMS;i++) {
		printf("%s",string[i]);
	}
	return(0);
}
