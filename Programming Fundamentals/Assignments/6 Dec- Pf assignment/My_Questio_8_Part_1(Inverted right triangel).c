#include<stdio.h>
void Invertedrighttriangle(int n)
{
    int i=0;
    if(n==1)
    printf("*\n");
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
        n--;
        Invertedrighttriangle(n);
        
    }
    
}
int main()
{
    int n;
    printf("How many rows do you want in your inverted right triangle?\n");
    scanf("%d",&n);
    Invertedrighttriangle(n);
}