#include <stdio.h>
#include <string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
}s[3];

int main()
{
	int i,n;
	printf("Enter the no. of students:");
	scanf("%d",&n);
	for(i=0;i<2;i++)
	{
		printf("\n Enter Name:");
		fflush(stdin);
		gets(s[i].name);
		printf("\n Enter Roll Number:");
		gets("%d",&s[i].roll);
		printf("\n Enter CGPA:");
		gets("f",&s[i].cgpa);
		
		};	
//	struct student s[3];
	

for (i=0;i<n;i++)

{
	printf("\nName:%s",s[i].name);
	printf("\n Roll number:%d",s[i].roll);
	printf("\n CGPA:%.2f",s[i].cgpa);
}
	
	return 0;
}
