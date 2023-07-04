#include<stdio.h>
#include<conio.h>
int main()
{   int n;
    printf("How many number of elements?\n");
    scanf("%d",&n);
    int arr[n];
    int i,j;
    printf("Enter the elemenst below\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    
    for ( i = 0; i < n/2; i++)
    {
        if(arr[i]==arr[n-1-i])
        {
            printf("element %d=%d and %d=%d are equal\n",i+1,arr[i+1],n-i+1,arr[n-i+1]);
        }
        else
        {
            printf("element %d=%d and %d=%d are not equal\n",i+1,arr[i+1],n-i+1,arr[n-i+1]);
            /* code */
        }
        
    }
    
}