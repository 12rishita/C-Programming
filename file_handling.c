#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	FILE *ptr,*ptr1;
	char ch1;
ptr=fopen(".txt","w");
	printf("enter text and press . to end");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,ptr);
		
	}
	printf("record saved\n");
	fclose(ptr);
	ptr=fopen("Filehandling.txt","r");
	printf("the cintents of the file are\n");
	ch1=fgetc(ptr);
	while (ch1!=EOF)
	{
		printf("%c",ch1);
		ch1=fgetc(ptr);
		
	}
fclose(ptr);
return 0;
}
