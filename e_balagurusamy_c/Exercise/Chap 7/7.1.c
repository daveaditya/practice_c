/*
 * Write a program for fitting a straight line through a set of points (xi,yi)=1...n.
 * The straight line equation is
 * 								y=mx+c
 * and the values of m and c are given y
 * 				m=(nsum(x1yi)-sum(x1)sum(yi))/(nsum(xi^2)-sum(xi)^2)
 * 				c=(1/n)*(sum(yi)-msum(xi))
 *
 * All summation are from 1 to n.
 */
#include<stdio.h>
#include<math.h>

double sumXY(float x[],float y[],int numOfElements);
double sum(float x[],int numOfElements);
double sumOfSquare(float x[],int numOfElements);

int main(int argc,char ** argv) {
	//Your code here.
	float x[10],y[10];
	double m,c;
	int numOfElements;
	printf("Enter the number of elements: ");
	scanf("%d",&numOfElements);
	printf("\nEnter the values of xi's : ");
	for(int i=0;i<numOfElements;i++) {
		scanf("%f",&x[i]);
	}
	printf("\nEnter the values of yi's : ");
	for(int i=0;i<numOfElements;i++) {
		scanf("%f",&y[i]);
	}
	double numerator=(numOfElements*sumXY(x,y,numOfElements))-(sum(x,numOfElements)*sum(y,numOfElements));
	double denominator=(numOfElements*sumOfSquare(x,numOfElements))-(pow(sum(x,numOfElements),2));
	m=numerator/denominator;
	c=(1/(double)numOfElements)*(sum(y,numOfElements)-(m*sum(x,numOfElements)));
	printf("The equation of straight line will be: y = %.2lf x + %.2lf.",m,c);
	return(0);
}

double sumXY(float x[],float y[],int numOfElements) {
	double sum=0;
	for(int i=0;i<numOfElements;i++) {
		sum=sum+(x[i]*y[i]);
	}
	return(sum);
}

double sum(float x[],int numOfElements) {
	double sum=0;
	for(int i=0;i<numOfElements;i++) {
		sum=sum+x[i];
	}
	return(sum);
}

double sumOfSquare(float x[],int numOfElements) {
	double sum=0;
	for(int i=0;i<numOfElements;i++) {
		sum=sum+(x[i]*x[i]);
	}
	return(sum);
}

