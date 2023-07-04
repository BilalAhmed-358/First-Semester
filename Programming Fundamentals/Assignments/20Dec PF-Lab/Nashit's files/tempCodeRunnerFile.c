#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many students?\n");
    scanf("%d", &n);
    struct marks
    {
        int test1;
        int test2;
        int test3;
    } student;
    struct marks *ptr_stu;
    ptr_stu=(*struct marks); malloc(n*sizeof(student));
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("\nEnter the marks of test 1 for student %d ", i + 1);
    //     scanf("%d", &student[i].test1);
    //     student[i].test1 = student[i].test1 + 3;
    //     printf("\nEnter the marks of test 2 for student %d ", i + 1);
    //     scanf("%d", &student[i].test2);
    //     student[i].test2 = student[i].test2 + 10;
    //     printf("\nEnter the marks of test 3 for student %d ", i + 1);
    //     scanf("%d", &student[i].test3);
    //     student[i].test3 = student[i].test3 + 8;
    // }
    // printf("After increment\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("The marks of test 1 for student %d are %d\n", i + 1, student[i].test1);

    //     printf("The marks of test 2 for student %d are %d\n ", i + 1, student[i].test2);

    //     printf("The marks of test 3 for student %d are %d\n", i + 1, student[i].test3);
    // }

    return 0;
}
