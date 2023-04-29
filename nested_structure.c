#include<stdio.h>
struct student{
	int roll_no;
	char name[12];
	int reg_no;
	struct address{
		int hno;
		char city[12];
	}a;
}s1;
int main()
{
	printf("enter roll_no of student:");
	scanf("%d",&s1.roll_no);
	printf("\nenter reg_no of student:");
	scanf("%d",&s1.reg_no);
	printf("\nenter name of student:");
	fflush(stdin);
	gets(s1.name);
	printf("\nenter address of student:");
	printf("\nenter house_no of student:");
	scanf("%d",&s1.a.hno);
	printf("\nenter city");
	fflush(stdin);
	gets(s1.a.city);
	printf("\nRoll_no is: %d",s1.roll_no);
	printf("\nReg_no is: %d",s1.reg_no);
	printf("\nName is: %d",s1.name);
	printf("\nAddress is\n house no is %d city is %s",s1.a.hno,s1.a.city);
	return 0;
}
