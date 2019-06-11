#include<stdio.h>
main()
{
	int m1=0,m2=0,m3=0;
	int sum=0;
	float avg=0;
	
	
	printf("\nEnter the marks in 1st subject: ");
	scanf("%d",&m1);
	
	printf("\nEnter the marks in 2nd subject: ");
	scanf("%d",&m2);
	
	printf("\nEnter the marks in 3rd subject: ");
	scanf("%d",&m3);
	
	
	
	sum=m1+m2+m3;
	avg=sum/3;
	
	
	printf("-------------------------------------");
	printf("\n Sum is %d \n Avg is %f ", sum, avg);
		
	
}
