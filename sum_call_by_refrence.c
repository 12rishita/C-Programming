#include<stdio.h>
void sum(int * ,int * ,int *);
int main()
{
	int a,b,s;
	printf("Enter values:\n");
	scanf("%d%d ",&a,&b);
	sum(&a,&b,&s);
	printf("%d",s);
	return 0;
	
}
void sum(int *a1 , int *b1 , int *s1)
{
	*s1= *a1+*b1;
	printf("Sum = %d\n",*s1);
}
