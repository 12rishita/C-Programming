#include<stdio.h>
int main()
{
int n,rev=0,a,t;
printf("enter any number=");
scanf("%d",&n);
t=n;
while(n!=0)
{
a=n%10;
rev=rev*10+a;
n=n/10;
}
printf("rev=%d",rev);
if (t==rev)
printf("no is palindrome\n");
else
printf("no is not a palindrome");
return 0;
}
