#include<stdio.h>
#include<string.h>
int main()
{
	int arr[7]; 
	printf("Enter the temperatures of the patient for the week\n");
	int i,k,temp;
	for(i=0;i<7;i++)
	{
		printf("Enter the temp for day %d\n", i+1);
		scanf("%d", &arr[i]);
	}
	int j=strlen(arr);
	printf("The length of the string you entered is %d",j);
	for(i=0;i<7;i++)
	{
		for(k=i+1;k<7;k++)
		{
			if(arr[i]>arr[k])
			{
				temp=arr[i];
				arr[i]=arr[k];
				arr[k]=temp;				
			}
		}
	}
	printf("After arranging the array you entered becomes\n");
	for(i=0;i<7;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	printf("The largest value in your array is %d and the smallest value in your array is %d",arr[j-1],arr[0]);
	
}
