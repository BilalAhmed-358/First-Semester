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
int i,j;
int main()
{

	printf("Enter details below\n");
	
	for(i=0;i<2;i++)
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
		FILE *fp;
		fp=fopen("K201857.txt","r");
		
		for(i=0;fread(ptr,sizeof(*ptr),1,fp) >0;i++)
		{
		//fread(ptr,sizeof(*ptr),1,fp)
		printf("%d %s %d %d %c %s\n",ptr->Emp_id,ptr->Emp_name,ptr->salary,ptr->age,ptr->depart.dep_id,ptr->depart.dep_name);
		
		}
		fclose(fp);
	}
