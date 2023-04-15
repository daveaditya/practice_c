//Write a rpogram to calculate the subject-wise and student-wise totals and store them as a part of the structure.
#include<stdio.h>

struct marks {
	int sub1;
	int sub2;
	int sub3;
	int total;
};

int main(int argc,char ** argv) {
	//Your code here.
	int i;
	struct marks student[3]={{45,61,81,0},{75,53,59,0},{57,36,81,0}};
	struct marks total;
	for(i=0;i<=2;i++) {
		student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
		total.sub1=total.sub1+student[i].sub1;
		total.sub2=total.sub2+student[i].sub2;
		total.sub3=total.sub3+student[i].sub3;
	}
	printf("STUDENT          TOTAL\n\n");
	for(i=0;i<=2;i++) {
		printf("\nStudent[%d]     %d\n",i+1,student[i].total);
	}
	printf("%s         %d\n%s        %d\n","Subject 1",total.sub1,"Subject 2",total.sub2,"Subject 3",total.sub3);
	printf("\nGrand Total=%d\n",total.total);
	return(0);
}
