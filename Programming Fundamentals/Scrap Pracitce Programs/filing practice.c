#include<stdio.h>

struct Employee
{
	char name[50];
	int age;
	float salary;
}emp,*ptr_emp=&emp;
void salary(struct Employee *ptr_emp);
int main()
{
    printf("Enter salary of employee\n");fflush(stdin);
	scanf("%f",&ptr_emp->salary);
	printf("Enter age of employee\n");fflush(stdin);
	scanf("%d",&ptr_emp->age);
	printf("Enter name of employee\n");fflush(stdin);
	scanf("%s",&ptr_emp->name);
	salary(ptr_emp);
	
}
void salary(struct Employee *ptr_emp)
{
	printf("The name of the employee is %s\n",ptr_emp->name);
	printf("The age of the employee is %d\n",ptr_emp->age);
	printf("The salary of the employee is %f\n",ptr_emp->salary);
}
