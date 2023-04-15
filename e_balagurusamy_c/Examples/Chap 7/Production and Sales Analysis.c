//Product and Sales Analysis.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int M[5][6],S[5][6],C[6], Mvalue[5][6],Svalue[5][6],Mweek[5],Sweek[5],Mproduct[6],Sproduct[6],Mtotal,Stotal,i,j,number;

	printf("Enter products manufactured week_wise\n");
	printf("M11,M12,-,M21,M22,-etc\n");
	for(i=0;i<=4;i++) {
		for(j=0;j<=5;j++) {
			scanf("%d",&M[i][j]);
		}
	}
	printf("Enter products sold week_wise\n");
	printf("S11,S12,-,S21,S22,-etc\n");
	for(i=0;i<=4;i++) {
		for(j=0;j<=5;j++) {
			scanf("%d",&S[i][j]);
		}
	}

	for(i=0;i<=4;i++) {
		for(j=0;j<=5;j++) {
			Mvalue[i][j]=M[i][j]*C[j];
			Svalue[i][j]=S[i][j]*C[j];
		}
	}

	for(i=0;i<=4;i++) {
		Mweek[i]=0;
		Sweek[i]=0;
		for(j=0;j<=5;j++) {
			Mweek[i]+=Mvalue[i][j];
			Sweek[i]+=Svalue[i][j];
		}
	}

	for(j=0;j<=5;j++) {
		Mproduct[j]=0;
		Sproduct[j]=0;
		for(i=0;i<=4;i++) {
			Mproduct[j]+=Mvalue[i][j];
			Sproduct[j]+=Svalue[i][j];
		}
	}

	Mtotal=Stotal=0;
	for(i=0;i<=4;i++) {
		Mtotal+=Mweek[i];
		Stotal+=Sweek[i];
	}

	printf("\n\n");
	printf("Following is the kist of things you can\n");
	printf("request for. Enter appropriate item number\n");
	printf("and press RETURN key\n\n");
	printf("1. Value matrices of production & sales\n");
	printf("2. Total value of weekly production & sales\n");
	printf("3. Product_wise monthly value of production & sales\n");
	printf("4. Grand total value of production & sales\n");
	printf("5. Exit\n");
	number=0;
	while(1) {
		printf("\n\nENTER YOUR CHOICE: ");
		sacnf("%d",&number);
		printf("\n");
		if(number==5) {
			printf("GOOD BYE\n\n");
			break;
		}
		switch(number) {
			case 1:
				printf("VALUE MATRIX OF PRODUCTION\n\n");
				for(i=0;i<=4;i++) {
					printf("Week(%d)\t",i);
					for(j=0;j<=5;i++) {
						printf("%7d",Mvalue[i][j]);
					}
					printf("\n");
				}
				printf("\nVALUE MATRI OF SALES\n\n");
				for(i=0;i<=4;i++) {
					printf("Week(%d)\t",i);
					for(j=0;j<=5;j++) {
						printf("%7d",Svalue[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
				printf("TOTAL WEEKLY PRODUCION & SALES\n\n");
				printf("			 PRODUCTION  SALES\n");
				printf("             -----       --   \n");
				for(i=0;i<=4;i++) {
					printf("Week(%d)\t",i);
					printf("%7d\t%7d\n",Mweek[i],Sweek[i]);
				}
				break;
			case 3:
				printf("PRODUCT_WISE TOTAL PRODUCTION & SALES\n\n");
				printf("                   PRODUCTION   SALES\n");
				printf("                   -----        --   \n");
				for(j=0;j<=5;j++) {
					printf("Product(%d)\t",j);
					printf("%7d\t%7d\n",Mproduct[j],Sproduct[j]);
				}
				break;
			case 4:
				printf("GRAND TOTAL OF PRODUCTION & SALES\n");
				printf("\nTotal production= %d\n",Mtotal);
				printf("Total sales= %d\n",Stotal);
				break;
			default:
				printf("Wroong choice, select again\n\n");
				break;
		}
	}
	printf("Exit from the program\n\n");
	return(0);
}
