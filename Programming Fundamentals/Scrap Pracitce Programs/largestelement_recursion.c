#include<stdio.h>
#include<string.h>
int largestelment(int arr[]);
int main()
{
    printf("Enter the number of elements you want in your array\n");
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of your array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    largestelment(arr);
}
int largestelment(int arr[])
{
    int static i=0;
    int n=strlen(arr),hstno=-9999999;
    if (i<n)
    {   i++;
        if(hstno<arr[i])
        {hstno=arr[i];}
        
        largestelment(arr);
    }
    printf("The largest element is %d",hstno);
    
    
}