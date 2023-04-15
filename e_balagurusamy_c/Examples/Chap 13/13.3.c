//Write a program to create a linear linked list interactively and print out the list and the total number of items in the list.
#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list {
	int number;
	struct linked_list *next;
};

typedef struct linked_list node;

int main(int argc,char ** argv) {
	//Your code here.
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	head=(node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	printf(head);
	printf("\n");
	printf("\nNumber of items = %d\n",count(head));
	return(0);
}

void create(node *list) {
	printf("Input a number\n");
	printf("(type -999 at end): ");
	scanf("%d",&list->number);

	if(list->number==-999) {
		list->next=NULL;
	}
	else {
		list->next=(node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}

void print(node *list) {
	if(list->next!=NULL) {
		printf("%d-->",list->number);
		if(list->next->next==NULL) {
			printf("%d",list->next->number);
		}
		print(list->next);
	}
	return;
}

int count(node *list) {
	if(list->next==NULL) {
		return(0);
	}
	else {
		return(1+count(list->next));
	}
}
