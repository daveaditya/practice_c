/*
 * Explain how complex number can be represented using structures. Write two C functions:
 * one to return the sum of two complex numbers passed as parameters
 */
#include<stdio.h>

struct complex {
	double real;
	double img;
};

struct complex add(struct complex c1,struct complex c2) {
	struct complex c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	return(c3);
}

struct complex product(struct complex c1,struct complex c2) {
	struct complex c3;
	c3.real=c1.real*c2.real-c2.img*c2.img;
	c3.img=c1.real*c2.img+c1.img*c2.real;
	return(c3);
}

int main(int argc,char ** argv) {
	//Your code here.
	return(0);
}
