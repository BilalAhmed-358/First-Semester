#include <stdio.h>
struct student_info
{
    int roll_no;
    char name[50];
    int age;
    char address[200];
};
void student_ages_14(struct student_info student[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (student[i].age == 14)
        {
            printf("%s\n", student[i].name);
        }
    }
}
void student_even_roll_no(struct student_info student[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (student[i].roll_no % 2 == 0)
        {
            printf("%s\n", student[i].name);
        }
    }
}
void student_details(struct student_info student[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (student[i].roll_no == key)
        {
            printf("\nThe name of the student is %s\nRoll No. is %d\nAge is %d\nAddress is %s\n", student[i].name, student[i].roll_no, student[i].age, student[i].address);
        }
    }
}

int main()
{
    int n, i, rollno;
    printf("How many students?\n");
    scanf("%d", &n);
    struct student_info student[n];
    printf("Enter the date for %d student(s) below\nKeep the ages of the student between 10 and 14\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name of student %d\n", i + 1);
        fflush(stdin);
        gets(student[i].name);
        printf("Enter the Roll No. of student %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &student[i].roll_no);
        printf("Enter the age of student %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &student[i].age);
        printf("Enter the address of student %d\n", i + 1);
        fflush(stdin);
        gets(student[i].address);
    }
    printf("\nThe names of the students whose age is equal to 14 are\n");
    student_ages_14(student, n);
    printf("\nThe names of the students whose Roll No.s are even are\n");
    student_even_roll_no(student, n);
    printf("\nEnter the Roll No. of the student you want information about\n");
    scanf("%d", &rollno);
    student_details(student, n, rollno);
}