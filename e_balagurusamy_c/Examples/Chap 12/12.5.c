//Write a program that uses the functions ftell and fseek.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	FILE *fp;
	long n;
	char c;
	fp=fopen("RANDOM","w");
	while((c=getchar)!=EOF) {
		putc(c,fp);
	}
	printf("No. of characters entered= %ld\n",ftell(fp));
	fclose(fp);
	fp=fopen("RANDOM","r");
	n=0L;

	while(feof(fp)==0) {
		fseek(fp,n,0);
		printf("Position os %c is %ld\n",getc(fp),ftell(fp));
		n=n+5L;
	}
	putchar('\n');

	fseek(fp,-1L,2);
	do {
		putchar(getc(fp));
	} while(!fseek(fp,-2L,1));
	fclose(fp);
	return(0);
}
