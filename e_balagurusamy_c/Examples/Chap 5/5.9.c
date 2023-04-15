/*Program presented illustrates the use of the goto statement. The program evaluates the square root for five
numbers. The variable count keeps the count of numbers read. When count is less than or equal to 5
goto read: direcrs the control to the label read; otherwise the program prints a message and stops.
*/
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	double x,y;
	int count;
	count=1;
	printf("Enter FIVE real values in a LINE\n");
	read:
		scanf("%lf",&x);
		printf("\n");
		if(x<0) {
			printf("Value- %d is negative\n",count);
		}
		else {
			y=sqrt(x);
			printf("%lf\t %lf\n",x,y);
		}
		count=count+1;
		if(count<=5) {
			goto read;
		}
		printf("End of Computation.");
	return(0);
}
