#include <stdio.h>
#include<stdlib.h>
struct Student_marks
{   
    char name[50];
    int test1;
    int test2;
    int test3;
    int total;
} student;

int main()
{
    int n = 2,i;
    struct Student_marks *ptr_student = &student;
    ptr_student=(struct Student_marks*)malloc(n*sizeof(struct Student_marks));
    for ( i = 0; i < n; i++)
    {   
        printf("\nEnter the name of the student\n");
        fflush(stdin);
        gets(ptr_student[i].name);
        printf("Enter the marks %s got in test 01\n",ptr_student[i].name);
        fflush(stdin);
        scanf("%d",&ptr_student[i].test1);
        ptr_student[i].test1+=3;
        ptr_student[i].total+=ptr_student[i].test1;
        printf("Enter the marks %s got in test 02\n",ptr_student[i].name);
        fflush(stdin);
        scanf("%d",&ptr_student[i].test2);
        ptr_student[i].test2+=10;
        ptr_student[i].total+=ptr_student[i].test2;
        printf("Enter the marks %s got in test 03\n",ptr_student[i].name);
        fflush(stdin);
        scanf("%d",&ptr_student[i].test3);
        ptr_student[i].test3+=8;
        ptr_student[i].total+=ptr_student[i].test3;
    }
    for ( i = 0; i < n; i++)
    {
        printf("\nThe total marks of student: %s after increment of:\n3 marks in test 01\n10 marks in test 02\n8 marks in test 3\nis %d\n",ptr_student[i].name,ptr_student[i].total);
    }
    
      
}