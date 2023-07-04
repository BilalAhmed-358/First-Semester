#include<stdio.h>
int sumofdigits(int n);
int main()
{   
    int n;
    printf("Enter the digits you want the sum of digits\n");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d\n",n,sumofdigits(n));
}
int sumofdigits( int n)
{
    int static sum=0;
    int a;
    if(n>0)
    {
       a=n%10;
       sum=sum+a;
       n=n/10;
       sumofdigits(n);
    }
    return sum;
    
}
