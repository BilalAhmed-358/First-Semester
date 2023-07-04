#include<stdio.h>
#include<conio.h>
int main()
{
	char arr[100],temp,arr1[100];
	printf("Enter an array\n");
	gets(arr);
	int i=0,n=strlen(arr),j,count=0;
		printf("The reverse of the string you entered is\n");
	for(i=n-1,j=0;i>=0;i--,j++)
	{	
		printf("%c", arr[i]);
		arr1[j]=arr[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr1[i])
		count++;
		else
		break;
	}
	if(count==n)
	printf("The string you entered is palendrome\n");
	else
	printf("Not parlendrome\n");

	
}
