#include<stdio.h>
int main()
{
	int num;
	printf("Enter your number=");
		scanf("%d",&num);
	if (num%2==0&&num%5==0)
		{
		printf("It is divisible by 2 and 5");
		
		}
	else
	{
		printf("It is not divisible by 2 and 5");
	}

	return 0 ;
}
