#include <stdio.h>
#include <math.h>
void main()
{
    int i, n;
    printf("Enter the number of element you want in X and Y arrays\n");
    scanf("%d", &n);
    struct x_and_y
    {
        float x[n];
        float y[n];
    }; 
    struct x_and_y sample,*ptr_sample=&sample;

    float r = 0, sum_x = 0, sum_y = 0, mean_x = 0, mean_y = 0, numerator = 0, denominator = 0;
    float *ptr_r = &r, *ptr_sum_x = &sum_x, *ptr_sum_y = &sum_y, *ptr_mean_x = &mean_x, *ptr_mean_y = &mean_y, *ptr_numerator = &numerator, *ptr_denominator = &denominator;
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d position of x\n", i + 1);
        scanf("%f", &ptr_sample->x[i]);
        *ptr_sum_x += ptr_sample->x[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d position of y\n", i + 1);
        scanf("%f", &ptr_sample->y[i]);
        *ptr_sum_y += ptr_sample->y[i];
    }
    *ptr_mean_x = *ptr_sum_x / n;
    *ptr_mean_y = *ptr_sum_y / n;
    
    
    for (i = 0; i < n; i++)
    {
        *ptr_numerator += (ptr_sample->x[i] - *ptr_mean_x) * (ptr_sample->y[i] - *ptr_mean_y);
        *ptr_denominator += sqrt(pow((ptr_sample->x[i] - *ptr_mean_x), 2) * pow((ptr_sample->y[i] - *ptr_mean_y), 2));
        if (*ptr_denominator==0)
        {
            printf("MATH ERROR!\n");
            return;
        }
        
    }
    *ptr_r = *ptr_numerator / *ptr_denominator;
    printf("The value of R(Pearson coefficient of correlation) is %.3f ", *ptr_r);
    //getch();
}
