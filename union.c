#include <stdio.h>
union job{
	char name[32];
	float salary;
	
	
}u;
int main(){
	printf("Enter name:\n");
	scanf("%s",u.name);
	printf("Displaying Name:\n");
	printf("Enter salary:\n");
	scanf("%s",&u.salary);
	
	printf("Salary: %.1f \n",u.salary);
	printf("%u",sizeof(u));
	return 0;
	
}
