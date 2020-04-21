#include<stdio.h>

int main()
{
	int arr[10];
	int i,sum=0;
	float avg;
	printf("Enter numbers to get their sum and average");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	sum+=arr[i];
	avg=sum/10.0;
	printf("Sum of numbers is %d ",sum);
	printf("Average is %f ",avg);
	getch();
}
