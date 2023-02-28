#include<stdio.h>
int main()
{
	int a,b,c;
    printf("Enter the values=");
    scanf("%d%d",&a,&b);
    printf("values before swapping\n=");
    printf("a=%d\tb=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("values after swapping\n=");
    printf("a=%d\tb=%d\n",a,b);
    
//	printf("%d\n",a&b);
//	printf("%d\n",a&b);
//	printf("%d\n",a|b);
//	printf("%d\n",a^b);
//	printf("%d\n",~a);
//	printf("%d\n",25<<3);
//	printf("%d\n",25>>3);
//	c=a>b?a:b;
//	printf("%d is greater",c);
//a>b?printf("%d is greater",a):printf("%d is greater",b);

	return 0 ;
}
  
