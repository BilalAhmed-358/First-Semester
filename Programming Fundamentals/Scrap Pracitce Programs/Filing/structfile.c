#include <stdio.h>
#include <string.h>
struct student_info
{
    char name[50];
    int age;
};
int main()
{
    struct student_info student, student_list[5],temp;
    int i = 0,j;
    printf("Enter the data for the studens\n");
    // for ( i = 0; i < 5; i++)
    // {
    //     printf("Enter the name of student %d\n",i+1);fflush(stdin);
    //     gets(student[i].name);
    //     printf("Enter the age of student %d\n",i+1);fflush(stdin);
    //     scanf("%d",&student[i].age);
    // }
    FILE *fp;
    fp = fopen("student_info.txt", "r");
    fwrite(&student, sizeof(student), 1, fp);
    while (fread(&student, sizeof(student), 1, fp) > 0)
    {
        student_list[i] = student;
        i++;
    }
    fclose(fp);
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp  (student_list[i].name,student_list[j].name)  >0)
            {
                temp=student_list[i];
                student_list[i]=student_list[j];
                student_list[j]=temp;
            }
        }
    }
    printf("The data of the student's arranged in alphabetical order is:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("The name of student %d is %s and his age is %d.\n",i+1,student_list[i].name,student_list[i].age);
    }
    
}