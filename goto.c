#include<stdio.h>
int main()
{ 
	int n,sum=0,i;
	l:
	for (i=1;i<=2;i++)
	{
		printf("Enter n: ");
		scanf("%d",&n);
		goto l;
		if(n<0)
		continue;
		else
		sum=sum+n;
		}
		printf("Sum =%d",sum);	
		
	return 0 ;
}

