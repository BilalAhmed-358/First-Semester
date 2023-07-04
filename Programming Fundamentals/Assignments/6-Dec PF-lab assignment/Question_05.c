#include <stdio.h>
#include <math.h>
int func(float arr[], float *sumptr, float *avgptr, float *standDevptr)
{

    int i, numerator;
    for (i = 0; i < 5; i++)
    {
        *sumptr = *sumptr + arr[i];
    }
    *avgptr = *sumptr / 5;
    for (i = 0; i < 5; i++)
    {
        numerator += ((arr[i] - *avgptr) * (arr[i] - *avgptr));
    }
    *standDevptr = sqrt(numerator / 5);
}
int main()
{
    float sum, avg, standDev, *sumptr, *avgptr, *standDevptr;
    sumptr = &sum;
    avgptr = &avg;
    standDevptr = &standDev;
    float arr[5] = {5, 6, 89, 74, 2};
    func(arr, sumptr, avgptr, standDevptr);
    printf("The value of sum is %.2f\n", sum);
    printf("The value of average is %.2f\n", avg);
    printf("The value of Standard Deviation is is %.2f\n", standDev);
}