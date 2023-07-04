#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{

    int count, elements_count;
    float nume = 0, deno = 0, avg_p = 0, avg_q = 0, r = 0, sum_p = 0, sum_q = 0;
    float *ptr_sum_p = &sum_p, *ptr_sum_q = &sum_q, *ptr_nume = &nume, *ptr_deno = &deno, *ptr_r = &r, *ptr_avg_p = &avg_p, *ptr_avg_q = &avg_q;
    printf("\nHow many elements in X and Y array?\n");
    scanf("%d", &elements_count);
    typedef struct
    {
        float p[elements_count];
        float q[elements_count];
    } p_and_q;

    p_and_q val, *ptr_val = &val;
    for (count = 0; elements_count > count; count++)
    {
        printf("\nValue for x%d: ", count + 1);
        scanf("%f", &ptr_val->p[count]);
        *ptr_sum_p += val.p[count];
        printf("\nValue for y%d: ", count + 1);
        scanf("%f", &ptr_val->q[count]);
        *ptr_sum_q += val.q[count];
    }
    for (count = 0; elements_count > count; count++)
    {
    }
    avg_q = sum_q / elements_count;
    avg_p = sum_p / elements_count;
    for (count = 0; count < elements_count; count++)
    {
        *ptr_nume += (val.p[count] - *ptr_avg_p) * (val.q[count] - *ptr_avg_q);
        *ptr_deno += sqrt(((val.p[count] - *ptr_avg_p)*(val.p[count] - *ptr_avg_p))*((val.q[count] - *ptr_avg_q)*(val.q[count] - *ptr_avg_q)));
    }
    *ptr_r = *ptr_nume / *ptr_deno;
    printf("R Pearson coefficient of correlation is %f ", *ptr_r);
}