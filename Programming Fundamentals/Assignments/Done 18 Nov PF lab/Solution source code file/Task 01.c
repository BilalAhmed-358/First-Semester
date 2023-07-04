#include<stdio.h>
#include<string.h>
#include<conio.h>
void Revers_of_String(char arr[])
{	char temp;
	int n=strlen(arr),i=0;
	int j=n;
	printf("The reverse of the string is:\n");
	for(i=0,j=n-1;i<(n-1)/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[j-i];
		arr[j-i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",arr[i]);
	}
}
int main()
{	
	char arr[100];
	printf("Enter the string you want the reverse of\n");
	gets(arr);
	Revers_of_String(arr);
	
}
