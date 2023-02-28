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
	switch (choice)
	{
	case 1:
	
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a+b;
		printf("Sum=%d",res);
		break;
	
	case 2:
	
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a-b;
		printf("Difference=%d",res);
		break;
	
	case 3:
	       
		printf("Enter inputs=");
	    scanf("%d%d",&a,&b);
		res=a*b;
		printf("Product=%d",res);
		break;
	
	default :
	printf("Invalid Choice");
	}
	return 0 ;
}
+963.5201000fdfsa/.,mjnhbgvfcdxszn        
