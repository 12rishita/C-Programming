#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	FILE *ptr ,*ptr1;
ptr=fopen("Base.txt","w");
printf("enter text and press . to end");
	ch=getche();
	while(ch!='.')
	{
		fputc(ch,ptr);
		ch=getche();
	}
	fclose(ptr);
ptr=fopen("Base.txt","r");
ptr1=fopen("copy.txt","w");
    ch1=fget(ptr);n
	while (ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(ptr);
		
	}
fclose(ptr);
return 0;
}
