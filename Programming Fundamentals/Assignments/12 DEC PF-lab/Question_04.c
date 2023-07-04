#include<stdio.h>
struct Employee_info
    {
        int Employee_id;
        int Employee_salary;
    }Employee1;
int main()
{
    printf("The size of the structure Employee is %d",sizeof(Employee1));
}