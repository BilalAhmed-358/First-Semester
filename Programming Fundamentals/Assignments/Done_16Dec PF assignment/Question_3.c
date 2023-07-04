#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    printf("Enter the number of points you want in P and Q arrays\n");
    scanf("%d", &n);
    struct P_and_Q
    {
        float P[n];
        float Q[n];
    };
    struct P_and_Q points;
    struct P_and_Q *ptr_points = &points;

    float d = 0, a;
    float *ptr_d = &d;
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d position of x\n", i + 1);
        scanf("%f", &ptr_points->P[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d position of y\n", i + 1);
        scanf("%f", &ptr_points->Q[i]);
    }
    for (i = 0; i < n; i++)
    {
        *ptr_d += pow((ptr_points->Q[i] - ptr_points->P[i]), 2);
    }
    *ptr_d = sqrt(*ptr_d);

    printf("The value of Euclidian distance of the given points is %.3f\n", *ptr_d);
    getchar();
}