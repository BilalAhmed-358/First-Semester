#include<stdio.h>
void fibonacci(int n);
int main()
{
    printf("How many indexes of fibonacci series do you want to print\n");
    int n;
    scanf("%d",&n);
    printf("The fibonacci series upto %d indexes is as follows\n");
    printf("0\n1\n");
    fibonacci(n);
}
void fibonacci(int n)
{
     int static a=0,b=1,c,i=0;
    if(i<n-2)
    {   
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
        fibonacci(n);
    }
}