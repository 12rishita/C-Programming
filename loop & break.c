#include<stdio.h>
int main()
{ 
	int n,sum=0,i;
	for (i=1;i<=5;i++)
	{
		printf("Enter n: ");
		scanf("%d",&n);
		if(n<0)
		continue;
		else
		sum=sum+n;
		}
		printf("Sum =%d",sum);	
		
	return 0 ;
}

