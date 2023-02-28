#include<stdio.h>
int main()
{ 
	int n,sum=0,a;
	printf("Enter Any Number=");
	scanf("%d",n);
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("Sum=%d",sum);	
		
	return 0 ;
}

