//Write a funciton to insert a given item before a specified node known as key node.
#include<stdio.h>

node *insert(node *head) {
	node *find(node *p,int a);
	node *new;
	node *n1;
	int key;
	int x;

	printf("Value of ne item?");
	scanf("%d",&x);
	printf("Value of key item? (type -999 if last)");
	scanf("%d",&key);

	if(head->number==key) {
		new=(node *)malloc(sizeof(node));
		new->number=x;
		new->next=head;
		head=new;
	}
	else {
		n1=find(head,key);
		if(n1==NULL) {
			printf("\nkey is not found\n");
		}
		else {
			new=(node *)malloc(sizeof(node));
			new-->number=x;
			new->next=n1->next;
			n1->next=new;
		}
	}
	return(head);
}

node *find(node *lists,int key) {
	if(list->next->number==key) {
		return(list);
	}
	else {

	}
	if(list->next->ext==NULL) {
		return(NULL);
	}
	else {
		find(list->next,key);
	}
}

int main(int argc,char ** argv) {
	//Your code here.
	return(0);
}
