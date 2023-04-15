//Median of List of Numbers.
#include<stdio.h>
#define N 10

int main(int argc,char ** argv) {
	//Your code here.
	int i,j,n;
	float median,a[N],t;
	printf("Enter the number of items\n");
	scanf("%d",&n);

	printf("Input %d values \n",n);
	for(i=0;i<n;i++) {
		scanf("%f",&a[i]);
	}

	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i;j++) {
			if(a[j]<=a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			else {
				continue;
			}
		}
	}

	if(n%2==0) {
		median=(a[(int)(n/2)]+a[(int)(n/2+a)])/2.0;
	}
	else {
		median=a[n/2+1];
	}

	for(i=1;i<=n;i++) {
		printf("%f",a[i]);
	}
	printf("\n\nMedian is %f\n",median);
	return(0);
}
