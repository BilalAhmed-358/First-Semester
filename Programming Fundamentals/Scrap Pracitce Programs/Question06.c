#include<stdio.h>
#include<conio.h>
#include<string.h>
bool BS(int arr[], int key, int begin, int end)
{
    int mid = (begin + end) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else
    {
        if (end <= begin)
        {
            return false;
        }
        else
        {
            if (arr[mid] > key)
            {
                return BS(arr, key, begin, mid - 1);
            }
            else
            {
                return BS(arr, key, mid + 1, end);
            }
        }
    }
}
int main()
{   int begin,end,key,temp;
    printf("How many elements in the array?\n");
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",& arr[i]);
    }
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			 temp=arr[i];
			 arr[i]=arr[j];
			 arr[j]=temp;
			}
		}
	}
    printf("Elements after arranging\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("Enter the key you want to find\n");
    scanf("%d",&key);
    begin=arr[0];
    end=arr[n];
    printf("%d", BS(arr,key,begin,end));
    
    
    
}
