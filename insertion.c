#include <stdio.h>
int main()
{
	int a[10],i,n,pos;
	printf("Enter no. of elements in array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the location where you wish to delete from an array ");
	scanf("%d",&pos);
	for (i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
		
	}
	printf("Resultant of an array is \n");
	for (i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
