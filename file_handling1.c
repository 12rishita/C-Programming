#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch1;
ptr=fopen("filehandling.txt","w");
	printf("enter text and press . to end");
	ch1=fgetc(ptr);
//	while((ch1=fgetc(ptr)!=EOF))
	while (ch1!=EOF)
	{
		printf("%c",ch1);
		ch1=fgetc(ptr);
	}
	
return 0;
}
