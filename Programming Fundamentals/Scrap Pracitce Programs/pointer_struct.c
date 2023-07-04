#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j;
struct Employee
{
    char name[50];
    int salary;
}emp[3],*ptr=emp;
int avg_salary(struct Employee *ptr);
int main()
{
    printf("Enter the data of employees\n");
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the name of employee %d\n",i+1);fflush(stdin);
        gets((ptr+i)->name);
        printf("Enter the salary of employee %d\n",i+1);fflush(stdin);
        scanf("%d",&(ptr+i)->salary);
    }
    printf("The data of the employees you entered is as follows\n");
    for ( i = 0; i < 3; i++)
    {
        printf("The name of employee %d is %s\n",i+1,(ptr+i)->name);
        printf("The salary of employee %d is %d\n",i+1,(ptr+i)->salary);
    }
    printf("The average salary of the employees you entered is %d.",avg_salary(ptr));
    
    
}
int avg_salary(struct Employee *ptr)
{   int sum=0;
    for ( i = 0; i < 3; i++)
    {
        sum+=(ptr+i)->salary;
    }
    return sum/3;
    
}