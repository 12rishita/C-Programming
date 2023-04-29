#include<stdio.h>
int main()
{
	int radii,area;
	int *p,*p1;
	p=&radii;
	p1=&area;
	printf("Enter the radius od circle=\n");
	scanf("%d",p);
	*p1=3.14*(*p)*(*p);
	printf("Area of circle is : %d",*p1);
	return 0;
	
}
