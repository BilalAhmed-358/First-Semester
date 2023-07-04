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

void Input_data(struct Employee *ptr);          //part a
void Display_data(struct Employee *ptr);        //part a
void Dept_Y_salary(struct Employee *ptr);       //part b
void Replace(struct Employee *ptr);             //part c
void Age_greater_than_30(struct Employee *ptr); //part d
void Delete(struct Employee *ptr);              //part e
int main()
{
    int choice;
    printf("Enter:\n1 for input data in file.\n2 for displaying the contents of file\n3 for Finding employees in Dept y whose salaries are greater than the max salary of dept X employees.\n4 for replacing the spaces in the name of an employee with -.\n5 for finding the info of employees who work in depart X and whose age is greater than 30.\n6 for deleting a record from a file\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        Input_data(ptr);
        break;
    case 2:
        Display_data(ptr);
        break;
    case 3:
        Dept_Y_salary(ptr);
        break;
    case 4:
        Replace(ptr);
        break;
    case 5:
        Age_greater_than_30(ptr);
        break;
    case 6:
        Delete(ptr);
        break;
    default:
    {
        printf("Please Choose a valid program\n");
        main();
        break;
    }
    }
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
    Display_data(ptr);
    printf("Data entered successfully\n");
}

void Display_data(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K200183.txt", "r");
    if (fp == NULL)
    {
        printf("File couldnot be opened\n");
    }
    printf("\nThe data read from the file is as follows\n\n\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        printf("The name of the Employee %d is %s.\nHis employe ID is %d.\nHis salary is %d.\nHis age is %d.\nHis depart id is %c.\nHis depart name is %s.\n\n\n", i + 1, ptr->Emp_name, ptr->Emp_id, ptr->salary, ptr->age, ptr->depart.depart_id, ptr->depart.depart_name);
    }
    fclose(fp);
}

void Dept_Y_salary(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K200183.txt", "r");
    if (fp == NULL)
    {
        printf("File couldnot be opened\n");
    }
    int max_salary_in_dept_X = -999;
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if ((ptr + i)->depart.depart_id == 'x' || (ptr + i)->depart.depart_id == 'X')
        {
            if ((ptr + i)->salary > max_salary_in_dept_X)
            {
                max_salary_in_dept_X = (ptr + i)->salary;
            }
        }
    }
    rewind(fp);
    printf("The max salary in Department X is %d.\n\n", max_salary_in_dept_X);
    printf("The list of Employees in Dept Y whose salary is greater than the Max salary in Dept X is as follows\n\n\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (ptr->depart.depart_id != 'X' && ptr->salary > max_salary_in_dept_X)
        {
            printf("%d) %s\n", j + 1, ptr->Emp_name);
            j++;
        }
    }
    fclose(fp);
}
void Replace(struct Employee *ptr)
{
    int n;
    printf("Enter the ID of the employee in whose name you want to change ' ' to '-'\n");
    fflush(stdin);
    scanf("%d", &n);
    FILE *fp;
    fp = fopen("K200183.txt", "r");
    if (fp == NULL)
    {
        printf("File couldnot be opened\n");
    }
    printf("\nThe name of employee before it has been changed:\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (n == (i + 1))
        {
            printf("%s\n", ptr->Emp_name);
        }
    }
    rewind(fp);
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (n == (i + 1))
        {
            int len = strlen(ptr->Emp_name);
            char name[len];
            for (j = 0; j < len; j++)
            {
                if (ptr->Emp_name[j] == ' ')
                {

                    name[j] = '-';
                }
                else
                {
                    name[j] = ptr->Emp_name[j];
                }
            }
            name[j] = '\0';
            strcpy(ptr->Emp_name, name);
            printf("The name after it has been changed\n");
            printf(ptr->Emp_name);
        }
    }
    fclose(fp);
}
void Age_greater_than_30(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K200183.txt", "r");
    if (fp == NULL)
    {
        printf("File couldnot be opened\n");
    }
    printf("\nThe list of employees who work in department X and whose age is greater than 30\n\n\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (ptr->depart.depart_id == 'X' && ptr->age > 30)
        {

            printf("The name of the Employee %d is %s.\nHis employe ID is %d.\nHis salary is %d.\nHis age is %d.\nHis depart id is %c.\nHis depart name is %s.\n\n\n", i + 1, ptr->Emp_name, ptr->Emp_id, ptr->salary, ptr->age, ptr->depart.depart_id, ptr->depart.depart_name);
        }
    }
    fclose(fp);
}
void Delete(struct Employee *ptr) //part e
{   int del_id;
    printf("Contents of file before deletion of record\n");
    Display_data(ptr);
    printf("Enter the id of the employee you want to delete\n");
    scanf("%d",&del_id);
    FILE *fp,*ft;
    fp = fopen("K200183.txt", "r");
    ft = fopen("copy.txt", "w");
    if (fp == NULL)
    {
        printf("File couldnot be opened\n");
    }
    if (ft == NULL)
    {
        printf("File couldnot be opened\n");
    }
    while (  fread(ptr, sizeof(*ptr), 1, fp) >0)
    {
        if (ptr->Emp_id!=del_id)
        {
           fwrite(ptr, sizeof(*ptr), 1, ft);
        }
        
    }
    fclose(fp);fclose(ft);
    remove("K200183.txt");
    rename("copy.txt","K200183.txt");
    printf("Contents of file after deletion\n");
    Display_data(ptr);
    


}