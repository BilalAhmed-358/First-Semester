#include <stdio.h>
#include <math.h>
#include<conio.h>
float Stand_Deviation(int size,float array[])
{

    float numer=0;
    float sum=0;
    float mean=0;
    int count=0;
    for ( count = 0; count < size; count++)
    {
        sum+=array[count];
    }
    mean=sum/size;
    for ( count = 0; count < size; count++)
    {
        numer+=(array[count]-mean)*(array[count]-mean);
    }
    return sqrt(numer/size);
    

}
int main()
{
    int size=8;
    float array[8] = {10,12,23,23,16,23,21,16};
    printf("The Standard Deviation of the given data is %f",Stand_Deviation(size,array));
}
