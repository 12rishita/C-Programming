#include <stdio.h>
int main()
{
	int a[10],i,n;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements with their address are\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t%u\n",a[i],&a[i]);
	}
	printf("\n%u",a);
	return 0;
}
