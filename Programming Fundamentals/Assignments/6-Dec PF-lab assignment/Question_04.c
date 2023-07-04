#include<stdio.h>
int main()
{   int *ptr,low,i,n;
    printf("How many elements do you want in your array?\n");
    scanf("%d",&n);
    printf("Now enter the elements of the array below\n");
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    ptr=&arr[0];
    for (int i = 0; i < n; i++)
    {
        if(*ptr<low)
        {
            low=*ptr;;
        }
        ptr++;
    }
    printf("The smallest value in the array is %d",low);
    

}