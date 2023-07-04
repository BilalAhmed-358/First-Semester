#include<stdio.h>
#include<string.h>
#include<conio.h>
void largest_and_smallest(int arr[]);
int main()
{	int n,i;
	printf("How many elements?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	largest_and_smallest(arr);
}
void largest_and_smallest(int arr[])
{
	int i=0,j=0,temp,n;
	printf("Enter the number of elements again please\n");
	scanf("%d",&n);
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
	printf("The largest element is %d and the smallest element is %d", arr[n-1],arr[0]);
	
}
