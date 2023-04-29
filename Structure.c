#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
	
}s;

int main()
{
	printf("Enter your name=");
	scanf("%s",s.name);
	printf("Enter your roll no.=");
	scanf("%s",&s.roll);
	printf("Enter you cgpa=");
	scanf("%s",&s.cgpa);
	printf("\n\n Name:%s\n",s.name);
	printf("\n\n Roll number:%d\n",s.roll);
	printf("\n\n CGPA:%.2f",s.cgpa);

	
	return 0;
}
