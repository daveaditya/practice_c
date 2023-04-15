/*
 * An electricity board charges the following rates for the use of electricity:
 *
 * For first 200 units: 80 P per unit
 * For next 100 units: 90 P per unit
 * Beyond 300 units: Rs. 1.00 per unit
 *
 * All users are charged minimum of Rs. 100 as meter charge.
 * If the total is more than 400, then an additional surcharge of 15% of total amount is charged.
 *
 * Write a prograqm to read the names of users and number of units consumed and print out the charges with names.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char name[15];
	int unit,units;
	float price=100.00;
	printf("\nEnter the name of customer: ");
	scanf("%s",name);
	printf("\nEnter the number of units consumed: ");
	scanf("%d",&units);
	unit=units;
	if(units<=200) {
		price=price+((((units)*80))/100);
	}
	else if(units>200 && units<=300) {
		price=price+((((units)*80))/100);
		units=units-200;
		price=price+((((units)*90))/100);
	}
	else if(units>300 && units<=400) {
		price=price+((((units)*80))/100);
		units=units-200;
		price=price+((((units)*90))/100);
		units=units-100;
		price=price+(((units)*1));
	}
	else {
		price=price+((((units)*80))/100);
		units=units-200;
		price=price+((((units)*90))/100);
		units=units-100;
		price=price+(((units)*1));
		price=price+(0.15*price);
	}
	printf("\nName: %s, Units: %d, and Cost: %.2f.",name,unit,price);
	return(0);
}
