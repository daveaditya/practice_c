//Write a program that will receive a filename and a line of text as command line arguments and write the text to the file.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	FILE *fp;
	int i;
	char word[15];

	fp=fopen(argv[1],"w");
	printf("\nNo. of arguments in command line=%d\n\n",argc);
	for(i=2;i<argc;i++) {
		fprintf(fp,"%s",argv[i]);
	}
	fclose(fp);

	printf("Contents of %s file\n\n",argv[1]);
	fp=fopen(argv[1],"r");
	for(i=2;i<argc;i++) {
		fscanf(fp,"%s",word);
		printf("%s",word);
	}

	fclose(fp);
	printf("\n\n");

	for(i=0;i<argc;i++) {
		printf("%*s\n",i*5,argv[i]);
	}
	return(0);
}
