#include <stdio.h>
int main()
{
	int a[10],i,n,sum=0;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("\nSum of all even number in the elements in array =%d",sum);
	return 0;
}
