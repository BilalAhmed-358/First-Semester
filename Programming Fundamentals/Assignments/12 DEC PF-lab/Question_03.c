#include<stdio.h>
struct Employee_info
    {
        int Employee_id;
        int Employee_salary;
    };
float avg_salary(struct Employee_info salary[])
{
    int i=10;float sum=0,avg=0;
    for ( i = 0; i < 10; i++)
    {
        sum+=salary[i].Employee_salary;
    }
    avg=sum/10;
    return avg;
    
}
int main()
{
    struct Employee_info salary[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the Employee Id of Employee no.%d\n",i+1);
        scanf("%d",&salary[i].Employee_id);
        printf("Enter the salary of Employee no.%d\n",i+1);
        scanf("%d",&salary[i].Employee_salary);
    }
    printf("The average salary of the employees is %.2f", avg_salary(salary));
    

    
}