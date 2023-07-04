#include<stdio.h>
#include<string.h>
int i,j;
struct student_info
{
    char name[50];
    int age;    
}student[3];
int main()
{
    struct student_info *ptr=student;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d\n",i+1);fflush(stdin);
        gets(ptr->name);
        printf("Enter the age of student %d\n",i+1);fflush(stdin);
        scanf("%d",&ptr->age);
        ptr++;

    }
    ptr=student;
    for ( i = 0; i < 3; i++)
    {
        printf("The name of student %d is %s\n",i+1,ptr->name);fflush(stdin);
        printf("The age of student %d is %d\n",i+1,ptr->age);fflush(stdin);
        ptr++;

    }
    
}
