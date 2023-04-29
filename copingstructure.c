#include <stdio.h>
#include <string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
};

int main()
{
	struct student s={
		"Rishita",1,8.9
	},s1;
	strcpy(s1.name,s.name);
	s1.roll=s.roll;
	s1.cgpa=s.cgpa;


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
