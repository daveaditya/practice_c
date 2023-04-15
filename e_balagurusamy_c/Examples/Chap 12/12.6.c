//Program to append additional terms to the file INVENTORY created in 12.3 and print the total contents of the file.
#include<stdio.h>

struct invent_record {
	char name[10];
	int number;
	float price;
	int quantity;
};

int main(int argc,char ** argv) {
	//Your code here.
	struct invent_record item;
	char filename[10];
	int response;
	FILE *fp;
	long n;
	void appeen(struct invent_record *x,FILE y);
	printf("Type filename: ");
	sacnf("%s",filename);
	fp=fopen(filename,"a+");
	do {
		append(&item,fp);
		printf("\nItem %s appended.\n",item.name);
		printf("\nDo you want to add another item (1 for YES /0 for NO)?" );
		scanf("%d",&response);
	} while(response==1);

	n=ftell(fp);
	fclose(fp);

	fpopen(filename,"r");

	while(ftell(fp)<n) {
		fscanf(fp,"%s %d %f %d",item.name,&item.number,&item.price,&item.quantity);
		fprintf(stdout,"%-8s %7d %8.2f %8d\n",item.name,item.number,item.price,item.quantity);
	}
	fclose(fp);
	return(0);
}

void append(struct invent_record *product,FILE *ptr) {
	printf("Item name: ");
	scanf("%s",product->name);
	printf("Item number: ");
	scanf("%d",&product->number);
	printf("Item price: ");
	sacnf("%f",&product->price);
	printf("Quantity: ");
	scanf("%d",&product->quantity);
	fprintf(ptr,"%s %d %.2f %d",product->name,product->number,product->price,product->quantity);
}
