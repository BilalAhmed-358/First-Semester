#include<stdio.h>
#include<string.h>
int main()
{
	int n,i=0,j=0,temp;
	printf("How many elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the number of elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
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
	printf("Here is your array after it has been sorted out\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", arr[i]);
	}
}
