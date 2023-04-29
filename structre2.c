#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
	
}s,s1;

int main()
{
	printf("Enter your name=");
	scanf("%s",s.name);
	printf("Enter your roll no.=");
	scanf("%d",&s.roll);
	printf("Enter you cgpa=");
	scanf("%f",&s.cgpa);
	
	printf("\nEnter your name=");
	scanf("%s",s1.name);
	printf("Enter your roll no.=");
	scanf("%d",&s1.roll);
	printf("Enter you cgpa=");
	scanf("%f",&s1.cgpa);
	
	printf("Student1");
	printf("\nName:%s",s.name);
	printf("\n Roll number:%d",s.roll);
	printf("\n CGPA:%.2f",s.cgpa);
	
	printf("\n\nStudent2");
	printf("\n Name:%s",s1.name);
	printf("\n Roll number:%d",s1.roll);
	printf("\n CGPA:%.2f",s1.cgpa);


	
	return 0;
}
