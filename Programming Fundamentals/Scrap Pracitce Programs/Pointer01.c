#include<stdio.h>
void func(float *avg,float *sum); 
int main()
{
    float sum,avg;
    func(&avg,&sum); 
    printf("The value of the sum is %.3f.\nThe value of the average is %.3f.",sum,avg);   
    return 0;
}
void func(float *avg,float *sum)
{
    int n1=1,n2=2,n3=3,n4=4,n5=5;
    *sum=n1+n2+n3+n4+n5;
    *avg=(n1+n2+n3+n4+n5)/5;

}