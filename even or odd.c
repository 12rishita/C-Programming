#include<stdio.h>
int main()
{
	int i,odd=0,even=0,n;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		even=even+1;
		else
		odd++;
		
	}
	printf("Count of even roll no =%d\n",even);
	printf("Count of odd roll no =%d",odd);
	return 0 ;
}
