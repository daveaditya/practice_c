//Program to calculate frequency for an electric circuit using Frequency=sqrt((1/LC)-(R^2/4C^2)).
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float L,R,C=0.0;
	double F=0.0;
	printf("\nEnter the inductance of circuit: ");
	scanf("%f",&L);
	printf("\nEnter the resistance of the circuit: ");
	scanf("%f",&R);
	printf("\nInductance\tResistance\tCapacitance\tFrequency");
	for(C=0.01;C<=0.1;C=C+0.01) {
		F=sqrt((1/(L*C))-(R*R)/(4*C*C));
		printf("\n%f\t%f\t%f\t%lf",L,R,C,F);
	}
	return(0);
}
