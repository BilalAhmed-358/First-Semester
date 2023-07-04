#include<stdio.h>
#include<string.h>
void array_print(int arr[]);
int main()
{   printf("How many elements do you want in your array\n");
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of your array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is as follows\n");
    array_print(arr);
    
}
void array_print(int arr[])
{   int static i=0;
    int n=strlen(arr);
    if(i<n)
    {
        printf("%d\n",arr[i]);
        i++;
        array_print(arr);
    }
    
}
