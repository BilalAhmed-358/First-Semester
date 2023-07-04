#include<stdio.h>
void salary(struct Employee *ptr_emp);
struct Employee
{
	char name[20];
	int age;
	float salary;
}emp,*ptr_emp=emp;

int main()
{
	
	printf("Enter salary of employee\n");
	scanf("%f",&ptr_emp->salary);
	printf("Enter age of employee\n");
	scanf("%d",&ptr_emp->age);
	printf("Enter name of employee\n");
	fflush(stdin);
	scanf("%s",&ptr_emp->name);
	salary(ptr_emp);
	
}
void salary(struct Employee *ptr_emp)
{
	
}
