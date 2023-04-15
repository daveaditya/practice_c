//Program to find transpose of a matrix.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int i,j,a[3][3],b[3][3];
	printf("Enter a 3x3 matrix:\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	pritnf("\nThe entered matrix is: \n");
	for(i=0;i<3;i++) {
		printf("\n");
		for(j=0;j<3;j++) {
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			b[i][j]=a[j][i];
		}
	}
	printf("\n\nThe transpose of the matrix is: \n");
	for(i=0;i<3;i++) {
		printf("\n");
		for(j=0;j<3;j++) {
			printf("%d\t",b[i][j]);
		}
	}
	return(0);
}
