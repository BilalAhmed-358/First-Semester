#include <stdio.h>
#include <math.h>
float func_StanDev(float *arr,int *size)
{

    int i=0;float numerator=0,sum=0,avg=0;
    for ( i = 0; i < *size; i++)
    {
        sum+=*(arr+i);
    }
    //printf("The sum is %.2f\n",sum);
    avg=sum/(*size);
    for ( i = 0; i < *size; i++)
    {
        numerator+=pow((*(arr+i)-avg),2);
    }
    return sqrt(numerator/(*size));
    

}
int main()
{
    float standDev;
    float arr[8] = {10,12,23,23,16,23,21,16};
    int n=sizeof(arr)/sizeof(float),*ptr_n=&n;
    int i;
    printf("The data you provided is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%.2f    ",arr[i]);
    }
    printf("\n");
    
    float *ptr_arr=&arr[0];
    printf("The Standard Deviation of the given data is %.3f.",func_StanDev(ptr_arr,ptr_n));
}
