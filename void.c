#include<stdio.h>
int main()
{
	int a=1;
	float b=7.8;
	char c='a';
	void *p;
	p=&c;
	printf("%c\n",*(char*)p);
	p=&a;
	printf("%d\n",*(int*)p);
	p=&b;
	printf("%f\n",*(float*)p);
	
return 0;
	
}
