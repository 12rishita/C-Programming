#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	FILE *ptr;
ptr=fopen("vowels.txt","w");
	printf("enter text and press . to end");
	ch=getche();
	while(ch!='.')
	{
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			fputc(ch,ptr);
		}
		ch=getche();
		fputc(ch,ptr);
		
	}
	printf("record saved\n");
	fclose(ptr);
	ptr=fopen("Vowels.txt","r");
	printf("the cintents of the file are\n");
	ch=fgetc(ptr);
	while (ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(ptr);
		
	}
fclose(ptr);
return 0;
}
