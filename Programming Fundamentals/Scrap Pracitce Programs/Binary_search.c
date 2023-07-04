#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("How many elements you want in the array?\n");
    scanf("%d", &n);
    int arr[n], i = 0,j=0, key,temp=0;
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    printf("The array you created is as follows\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j-1 < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
    printf("After sorting the array becomes\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter the number you want to find\n");
    scanf("%d", &key);
    int low = 0, high = n, mid = 0;
    i = 0;
    do
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("value found in %dth iteration and the element is at %dth position.\n",i+1,mid+1);
            break;
        }
        else if (key > arr[mid])
        {
            low = mid;
        }
        else if (key < arr[mid])
        {
            high = mid;
        }
        if (i==n&&arr[mid]!=key)
        {
            printf("Value not found\n");
        }
        
        i++;
    } while (i <= n);
}
