//Write a funciton to delete a specified node.
#include<stdio.h>

node *delete(node *head) {
	node *find(node *p,int a);
	int key;
	node *n1;
	node *p;
	printf("\nWhat is the item(number) to be deleted?");
	scanf("%d",&key);
	if(head->number==key) {
		phead->next;
		free(head);
		head=p;
	}
	else {
		n1=find(head.key);
		if(n1==NULL) {
			printf("\nKey not found\n");
		}
		else {
			p=n1->next->next;
			free(n1->next);
			n1->next=p;
		}
	}
	return(head);
}

int main(int argc,char ** argv) {
	//Your code here.
	return(0);
}
