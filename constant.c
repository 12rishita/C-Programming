#include<stdio.h>
int main()
{
	int a=1;
	int b=6;
	int *const p=&a;
	//p=&a;
	printf("%d %u %u \n",*p,p,&a);
	//p=&b
	*p=90;
	printf("%d %u %u \n",*p,p);
return 0;
	
}
