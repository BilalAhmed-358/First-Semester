#include<stdio.h>
int main()
{
    int n,i;
    printf("How many elements do you want to store in this array?\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array below:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=&arr[n-1];
    printf("The elements of the array printed in the reverse order with the use of a pointer is as folows:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",*ptr);
        ptr--;
    }
    
}