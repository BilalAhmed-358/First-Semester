#include<stdio.h>
#include<string.h>

struct department
{
	char dep_id;
	char dep_name[200];
};
struct Employee
{
	int Emp_id;
	char Emp_name[50];
	int salary;
	int age;
	struct department depart;
}emp[5],*ptr=emp;
void Replace(struct Employee *ptr);
void Avg_salary(struct Employee *ptr);
void Age_30(struct Employee *ptr);
void Delete(struct Employee *ptr);
int i,j;
int main()
{

	printf("Enter details below\n");
	
	for(i=0;i<5;i++)
	{
	
		printf("Enter the id of employee %d\n",i+1);
		fflush(stdin);
		scanf("%d",&(ptr+i)->Emp_id);
		printf("Enter the name of employee %d\n",i+1);
		fflush(stdin);
		gets((ptr+i)->Emp_name);
		printf("Enter the salary of employee %d\n",i+1);
		fflush(stdin);
		scanf("%d",&(ptr+i)->salary);
		printf("Enter the age of employee %d\n",i+1);
		fflush(stdin);
		scanf("%d",&(ptr+i)->age);
		printf("Enter the depart id of employee %d\n",i+1);
		fflush(stdin);
		scanf("%c",&(ptr+i)->depart.dep_id);
		printf("Enter the depart name of employee %d\n",i+1);
		fflush(stdin);
		gets((ptr+i)->depart.dep_name);
		FILE *fp;
		fp=fopen("K201857.txt","a");		
		fwrite((ptr+i),sizeof(*ptr),1,fp);
		fclose(fp);
}
		printf("Record Saved successfully\n");
		
		printf("\n------------------------------------------------------------------------------------------------------------------\n");
		FILE *fp;
		fp=fopen("K201857.txt","r");
		
		for(i=0;fread(ptr,sizeof(*ptr),1,fp) >0;i++)
		{
		
		printf("ID: %d\n Name: %s\n Salary: %d\n Age:%d\n Department id: %c\n Department name: %s\n",ptr->Emp_id,ptr->Emp_name,ptr->salary,ptr->age,ptr->depart.dep_id,ptr->depart.dep_name);
		
		}
		fclose(fp);
		Avg_salary(ptr);
		printf("\n-------------------------------------------------------------------------------------------------------------------\n");
		Replace(ptr);
		printf("\n--------------------------------------------------------------------------------------------------------------------\n");
		Age_30(ptr);
		printf("\n--------------------------------------------------------------------------------------------------------------------\n");
		Delete(ptr);
	}
	void Replace(struct Employee *ptr)
	{   
	
	int id;
    printf("Enter the ID of employee to remove space from his/her name\n");
    fflush(stdin);
    scanf("%d", &id);
    FILE *fp;
    fp = fopen("K201857.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
    }
    
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (id == (i + 1))
        {
            int len = strlen(ptr->Emp_name);
            char temp[len];
            for (j = 0; j < len; j++)
            {
                if (ptr->Emp_name[j] == ' ')
                {

                    temp[j] = '-';
                }
                else
                {
                    temp[j] = ptr->Emp_name[j];
                }
            }
            temp[j] = '\0';
            strcpy(ptr->Emp_name, temp);
            printf("Now name looks like...\n");
            printf(ptr->Emp_name);
           
        }
    }
    fclose(fp);
}
void Avg_salary(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K201857.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
    }
    float max_salary_X = -99999;
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if ((ptr + i)->depart.dep_id == 'x' || (ptr + i)->depart.dep_id == 'X')
        {
            if ((ptr + i)->salary > max_salary_X)
            {
                max_salary_X = (ptr + i)->salary;
            }
        }
    }
    rewind(fp);
    
	printf("X department max salary: %f.\n\n", max_salary_X);
	
    printf("Employees with max salary \n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (ptr->depart.dep_id != 'X' && ptr->salary > max_salary_X)
        {
            printf("Name %d is %s.\n Employee ID is %d\n Salary is %d\n Age is %d\nDepart id is %c\n Depart name is %s\n", j + 1, ptr->Emp_name, ptr->Emp_id, ptr->salary, ptr->age, ptr->depart.dep_id, ptr->depart.dep_name);
            j++;
        }
    }
    fclose(fp);
}
void Age_30(struct Employee *ptr)
{
    FILE *fp;
    fp = fopen("K201857.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
    }
    printf("Age over 30 in deparment X\n");
    for (i = 0; fread(ptr, sizeof(*ptr), 1, fp) > 0; i++)
    {
        if (ptr->depart.dep_id == 'X' && ptr->age > 30)
        {

            printf("Name %d is %s\n ID is %d\n Salary is %d.\nAge is %d.\nDepart id is %c.\nDepart name is %s.\n\n\n", i + 1, ptr->Emp_name, ptr->Emp_id, ptr->salary, ptr->age, ptr->depart.dep_id, ptr->depart.dep_name);
        }
    }
    fclose(fp);

}
void Delete(struct Employee *ptr) 
{
    int del_id;
    printf("Contents Before Deleting\n");
	fflush(stdin);
    printf("Enter id that u want to delete\n");
	fflush(stdin);
    scanf("%d", &del_id);
    FILE *fp, *fp1;
    fp = fopen("K201857.txt", "r");
    fp1 = fopen("new.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file\n");
    }
    if (fp1 == NULL)
    {
        printf("Error opeing file\n");
    }
    while (fread(ptr, sizeof(*ptr), 1, fp) > 0)
    {
        if (ptr->Emp_id != del_id)
        {
            fwrite(ptr, sizeof(*ptr), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    remove("K201857.txt");
    rename("new.txt", "K201857.txt");
    printf("Contents Now\n");
    
	
	fp=fopen("K201857.txt","r");
		
		for(i=0;fread(ptr,sizeof(*ptr),1,fp) >0;i++)
		{
		
		printf("ID: %d\n Name: %s\n Salary: %d\n Age:%d\n Department id: %c\n Department name: %s\n",ptr->Emp_id,ptr->Emp_name,ptr->salary,ptr->age,ptr->depart.dep_id,ptr->depart.dep_name);
		
		}
		fclose(fp);
   
}
