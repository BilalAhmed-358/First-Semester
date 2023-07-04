#include <stdio.h>
#include <math.h>
#include<conio.h>
int main()
{
    int count, number;
    printf("How many elements in A and B array?\n");
    scanf("%d", &number);
    struct A_and_B
    {
        float A[number];
        float B[number];
    };
    struct A_and_B points;
    struct A_and_B *ptr_points = &points;
    float d = 0;
    float *ptr_d = &d;
    for (count = 0; count < number; count++)
    {
        printf("\nValue for A%d: ", count + 1);
        scanf("%f", &ptr_points->A[count]);
        printf("\nValue for B%d: ", count + 1);
        scanf("%f", &ptr_points->B[count]);
    }
    for (count = 0; count < number; count++)
    {
        *ptr_d += sqrt((ptr_points->B[count] - ptr_points->A[count]) * (ptr_points->B[count] - ptr_points->A[count]));
    }
    printf("Euclidian distance is %.3f\n", *ptr_d);
}