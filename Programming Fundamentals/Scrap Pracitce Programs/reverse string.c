#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],arr1[100];
	printf("Enter a string:\n");
	gets(arr);
	int n=strlen(arr),i=0,j=0;
	printf("The reverse of the string is:\n");
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		printf("%c",arr[i]);
		arr1[j]=arr[i];
	}
	printf("\n");
	printf("The reverse of the string stored in another array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%c",arr1[i]);
	}
}
