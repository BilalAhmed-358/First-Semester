#include<stdio.h>
#include<conio.h>
int i,j;
struct Student
{
    char name[100];
    int age;
};
void student_data_input(struct Student student[], int n)
{
    for ( i = 0; i < n; i++)
    {
        printf("Enter the name of student %d\n",i+1);
        fflush(stdin);
        gets(student[i].name);
        printf("Enter the age of student %d\n",i+1);
        fflush(stdin);
        scanf("%d",&student[i].age);
    }
    return;
    
}
void student_data_output(struct Student student[], int n)
{
    for ( i = 0; i < n; i++)
    {
        printf("The name of student %d is %s\n",i+1,student[i].name);
        printf("Enter the age of student %d is %d\n",i+1,student[i].age);
    }
    return;
    
}
int main()
{
    int n;
    printf("How many students?\n");
    scanf("%d",&n);
    struct Student students[n];
    student_data_input(students,n);
    student_data_output(students,n);
    


}