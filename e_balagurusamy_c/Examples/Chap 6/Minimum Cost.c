//Minimum cost.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float p,cost,p1,cost1;
	for(p=0;p<=10;p=p+0.1) {
		cost=40-8*p+p*p;
		if(p==0) {
			cost1=cost;
			continue;
		}
		if(cost>=cost1) {
			break;
		}
	}
	cost1=cost;
	p1=p;
	cost=40-8*p+p*p;
	printf("\nMINIMUM OCST = %.2f AT p= %.1lf\n",cost,p);
	return(0);
}
