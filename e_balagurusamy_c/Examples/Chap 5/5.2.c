//The program counts the number of boys whose weight is less than 50kg and height is grater than 170cm.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count,i;
	float weight,height;
	count=0;
	printf("Enter the weight and height for 10 boys: ");
	for(i=1;i<=10;i++) {
		scanf("%f %f",&weight,&height);
		if(weight<50 && height>170) {
			count=count+1;
		}
	}
	printf("\nNumber of boys with weight < 50kg and height > 170 cm = %d",count);
	return(0);
}
