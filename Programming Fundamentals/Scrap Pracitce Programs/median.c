#include<stdio.h>
#include<string.h>
int main()
{
	int n,i=0,j=0,temp;
	float median;
	printf("Enter the number of elements you want in the array\n");
	scanf("%d",&n);
	float arr[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %f",&arr[i]);
	}
	printf("After arranging your array becomes\n");
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
	for(i=0;i<n;i++)
	{
		printf("%.2f\n",arr[i]);
	}
	if(n%2==0)
	{
		median=((arr[n/2]+arr[(n/2)-1])/2);
		printf("The median is %.2f",median);
	}
	else
	{
		median= arr[n/2];
		printf("The median is %.2f",median);
	}
}
