#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
//		printf("Sum=%d",sum);
		
	}
	printf("Sum=%d",sum);
	return 0 ;
}
