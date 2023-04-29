#include <stdio.h>
int main()
{
	float a[10],sum=0.0,avg;
	int i,n;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nAverage of all the elements in array =%f",avg);
	return 0;
}
