#include <stdio.h>
#include <conio.h>
#include <string.h>
int i = 0, j = 0;
struct department
{
    char depart_id;
    char depart_name[50];
};
struct Employee
{
    int Emp_id;
    char Emp_name[100];
    int salary;
    int age;
    struct department depart;
} employee[5], *ptr = employee;
void Input_data(struct Employee *ptr);
void Display_data(struct Employee *ptr);
void Dept_Y_salary(struct Employee *ptr);
int main()
{
    //Input_data(ptr);
    Display_data(ptr);
    Dept_Y_salary(ptr);
}

void Input_data(struct Employee *ptr)
{
    printf("\nEnter the data for the employees\n");
    FILE *fp;
    fp = fopen("K200183.txt", "w");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the Employee id of employee %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &(ptr + i)->Emp_id);

        printf("Enter the Employee name of employee %d\n", i + 1);
        fflush(stdin);
        gets((ptr + i)->Emp_name);

        printf("Enter the Employee salary of employee %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &(ptr + i)->salary);

        printf("Enter the Employee age of employee %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &(ptr + i)->age);

        printf("Enter the Employee depart id of employee %d (Choose X or Y)\n", i + 1);
        fflush(stdin);
        scanf("%c", &(ptr + i)->depart.depart_id);

        printf("Enter the Employee depart name of employee %d\n", i + 1);
        fflush(stdin);
        gets((ptr + i)->depart.depart_name);

        fwrite((ptr + i), sizeof(struct Employee), 1, fp);
    }
    fclose(fp);
    printf("Data entered successfully\n");
}

void Display_data(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K200183.txt", "r");
    if (fp == NULL)
    {
        printf("FIle couldnot be opened\n");
    }
    printf("\nThe data that you entered in the file is as follows\n\n\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        employee[i] = *ptr;
        printf("The name of the Employee %d is %s.\nHis employe ID is %d.\nHis salary is %d.\nHis age is %d.\nHis depart id is %c.\nHis depart name is %s.\n\n\n", i + 1, ptr->Emp_name, ptr->Emp_id, ptr->salary, ptr->age, ptr->depart.depart_id, ptr->depart.depart_name);
    }
}

void Dept_Y_salary(struct Employee *ptr)
{
    int max_salary_in_dept_X = -999;
    for (i = 0; i < 5; i++)
    {
        if ((ptr + i)->depart.depart_id == 'x' || (ptr + i)->depart.depart_id == 'X')
        {
            if ((ptr + i)->salary > max_salary_in_dept_X)
            {
                max_salary_in_dept_X = (ptr + i)->salary;
            }
        }
    }
    printf("The max salary in Department X is %d.\n\n", max_salary_in_dept_X);
    //printf("The list of Employees in Dept Y whose salary is greater than the Max salary in Dept X is as follows\n");
    printf("The names of the employees are\n");
    for (i = 0; i < 4; i++)
    {
        printf("%s\n",(ptr+i)->Emp_name);
    }
}

