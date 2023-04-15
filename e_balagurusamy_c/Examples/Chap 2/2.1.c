//Representation of interger constants on a 16-bit computer.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("Interger values\n\n");
	printf("%d %d %d\n",32767,32767+1,32767+10);
	printf("\n");
	printf("Long integer values\n\n");
	printf("%ld %ld %ld",32767L,32767+1L,32767L+10L);
	return(0);
}
