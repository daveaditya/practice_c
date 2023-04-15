//Program to display the digits of a number.
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int no,count=0,tens=0,temp;
	printf("\nEnter a number: ");
	scanf("%d",&no);
	temp=no;
	while(temp>0) {
		tens++;
		temp=temp/10;
	}
	printf("no = %d",no);
	count=pow(10,tens);
	for(int i=1;i<=tens;i++) {
		temp=no;
		while(no>0) {
			temp=no%count;
			printf("%3d",temp);
			count=count/10;
			no=no/10;
		}
	}
	return(0);
}
