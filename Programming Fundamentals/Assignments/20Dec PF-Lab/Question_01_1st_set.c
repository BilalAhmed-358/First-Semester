#include <stdio.h>
#include<string.h>
struct Address
{
    int house_no;
    int street_no;
    char area[20];
    char city[20];
    char country[20];
};
struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Address address_of_employee;
    int age;
    char designation[20];
};

int main()
{
    int n=10,i;
    struct Employee Employees[n];
    printf("Enter the data of the %d employees below:\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the of Name of Employee %d\n",i+1);
        fflush(stdin);
        gets(Employees[i].name);
        printf("Enter the ID of Employee %d\n",i+1);
        fflush(stdin);
        scanf("%d",&Employees[i].id);
        printf("Enter the Salary of Employee %d\n",i+1);
        fflush(stdin);
        scanf("%f",&Employees[i].salary);
        printf("Enter the of Flat No. of Employee %d\n",i+1);
        fflush(stdin);
        scanf("%d",&Employees[i].address_of_employee.house_no);
        printf("Enter the of Street No. Employee %d\n",i+1);
        fflush(stdin);
        scanf("%d",&Employees[i].address_of_employee.street_no);
        printf("Enter the Area of Employee %d\n",i+1);
        fflush(stdin);
        gets(Employees[i].address_of_employee.area);
        printf("Enter the city of Employee %d\n",i+1);
        fflush(stdin);
        gets(Employees[i].address_of_employee.city);
        printf("Enter the country of Employee %d\n",i+1);
        fflush(stdin);
        gets(Employees[i].address_of_employee.country);
        printf("Enter the Age of Employee %d\n",i+1);
        fflush(stdin);
        scanf("%d",&Employees[i].age);
        printf("Enter the Designation of Employee %d\n",i+1);
        fflush(stdin);
        gets(Employees[i].designation);
    }
    printf("The data you entered about your employees is as follows:\n");
    for ( i = 0; i < n; i++)
    {
        printf("\nThe of Name of Employee %d is %s\n",i+1,Employees[i].name);
        printf("The ID of Employee %d is %d\n",i+1,Employees[i].id);
        printf("The Salary of Employee %d is %.3f\n",i+1,Employees[i].salary);
        printf("The of Flat No. of Employee %d is %d\n",i+1,Employees[i].address_of_employee.house_no);
        printf("The of Street No. Employee %d is %d\n",i+1,Employees[i].address_of_employee.street_no);
        printf("The Area of Employee %d is %s\n",i+1,Employees[i].address_of_employee.area);
        printf("The city of Employee %d is %s\n",i+1,Employees[i].address_of_employee.city);
        printf("The country of Employee %d is %s\n",i+1,Employees[i].address_of_employee.country);
        printf("The Age of Employee %d is %d\n",i+1,Employees[i].age);
        printf("The Designation of Employee %d is %s\n",i+1,Employees[i].designation);
    }
    
    
}