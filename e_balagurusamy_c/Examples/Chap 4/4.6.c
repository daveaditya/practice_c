//Reading strings usign %wc and %ws.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int no;
	char name1[15],name2[15],name3[15];
	printf("Enter serial number and name one\n");
	scanf("%d %15c",&no,name1);
	printf("Enter srial number and name two\n");
	scanf("%d %s",&no,name2);
	printf("%d %15s\n\n",no,name2);
	printf("Enter serial number and name three\n");
	scanf("%d %15s",&no,name3);
	printf("%d %15s\n\n",no,name3);
	return(0);
}
