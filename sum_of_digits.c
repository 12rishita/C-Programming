#include<stdio.h>
int main()
{
	int a,n,sum=0;
	int *p,*p1,*p2;
	p=&a;
	p1=&n;
	p2=&sum;
	printf("Number =\n");
	scanf("%d",p1);
	while (*p1!=0)
	{
		*p=*p1 % 10 ;
		*p2=*p2+*p;
		*p1=*p1/10 ;
	}
	printf("%d", *p2);
	return 0;
	
}
