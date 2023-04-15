//Program to illustrate the method of sending an entire structure as a parameter to a function.
#include<stdio.h>

struct stores {
	char name[20];
	float price;
	int quantity;
};

struct stores update(struct stores product,float p,int q);
float mul(struct stroes stock);

int main(int argc,char ** argv) {
	//Your code here.
	float p_increment,value;
	int q_increment;

	struct stores item={"XYZ",25.75,12};

	printf("\nInput increment values: ");
	printf("     price increment, and quantity increment\n");
	scanf("%f %d",&p_increment,&q_increment);

	item=update(item,p_increment,q_increment);

	printf("Updated values of item\n\n");
	printf("Name: %s\n",item.name);
	printf("Price: %s\n",item.price);
	printf("Quantity: %d\n",item.quantity);

	value=mul(item);

	printf("\nValue of the item= %f\n",value);
	return(0);
}

struct stores update(struct stores product,float p,int q) {
	product.price+=p;
	product.quantity+=q;
	return(product);
}

float mul(struct stores stock) {
	return(stock.price*stock.quantiy);
}
