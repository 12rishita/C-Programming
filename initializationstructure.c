#include <stdio.h>
#include <string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
};
struct student s={"Rishita",1,8.8};
struct student s1={"Rishita",2,8.8};

	
//}s={"Rishita",1,8.8},s2={"Rishita",2,8.8};

int main()
{
//	printf("Enter your name=");
//	scanf("%s",s.name);
//	printf("Enter your roll no.=");
//	scanf("%d",&s.roll);
//	printf("Enter you cgpa=");
//	scanf("%f",&s.cgpa);
//	
//	printf("\nEnter your name=");
//	scanf("%s",s1.name);
//	printf("Enter your roll no.=");
//	scanf("%d",&s1.roll);
//	printf("Enter you cgpa=");
//	scanf("%f",&s1.cgpa);

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
