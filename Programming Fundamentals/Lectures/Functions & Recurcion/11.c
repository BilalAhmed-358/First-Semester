#include<stdio.h> 
int fibonacci(int);

int main(void)
{    
    int num, n, ctr;

    printf("Enter the number of terms: ");
    scanf("%d", &num);       
    for(ctr = 0; ctr < num; ctr++)
    {
        printf("%d ", fibonacci(ctr));
    }
    return 0; 
}
int fibonacci(int n)
{    
    if(n== 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
