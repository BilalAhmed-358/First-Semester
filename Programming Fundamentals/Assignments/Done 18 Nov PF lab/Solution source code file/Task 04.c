#include<stdio.h>
#include<string.h>
#include<conio.h>
void anagram(char arr[], char arr1[]);
int main()
{
	char arr[100],arr1[100];
	printf("Enter the first string\n");
	gets(arr);
	printf("Enter the second string\n");
	gets(arr1);
	anagram(arr,arr1);
}
void anagram(char arr[], char arr1[])
{	char temp;
	int n=strlen(arr),m=strlen(arr1),i=0,j=0;
	if(n==m)
	{
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
		for(j=i+1;j<n;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	
	for(i=0,j=0;i<n;i++)
	{
		if(arr[i]==arr[i])
		j++;
		else
		break;
	}
	if(j==n)
	printf("The strings you entered are anagram\n");
	else("The strings you entered are not anagram\n");
	}
	else
	printf("The strings you have entered are not anagram\n");
}
