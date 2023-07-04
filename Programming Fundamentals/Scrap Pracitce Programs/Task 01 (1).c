#include<stdio.h>
#include<string.h>
char Revstr(char arr[])
{	
	int i=0;
	int j= strlen(arr);
//	for(i=0;i<j;i++)
//	{
//		arr[i]=arr[j-i];
//	}
	printf("The reverse of the array is\n");
	for(j=j-1;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
	return 0;
}
int main()
{
	char arr[100];
	printf("Enter the string:\n");
	gets(arr);
	Revstr(arr);
}
