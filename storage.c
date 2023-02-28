#include<stdio.h>
int main()
{
	int a,b,res;
	int choice;
	printf("Press 1 for addition\n");
	printf("Press 1 for subtraction\n");
	printf("Press 1 for multiplication\n");
	printf("Enter your choice=");
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a+b;
		printf("Sum=%d",res);
	}
	else if (choice==2)
	{
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a-b;
		printf("Difference=%d",res);
	}
	else if (choice==3)
	{
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a*b;
		printf("Product=%d",res);
	}
	else
	printf("Invalid Choice");
	return 0 ;
}
