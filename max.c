#include <stdio.h>
int main()
{
	float a[10],max=0.0;
	int i,n;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	printf("\Max=%f",max);
	return 0;
}
