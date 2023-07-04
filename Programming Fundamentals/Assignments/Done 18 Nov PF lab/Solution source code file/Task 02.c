#include<stdio.h>
#include<string.h>
#include<conio.h>
void Revers_of_String(char arr[])
{	char temp,arr1[100];
	int n=strlen(arr),i=0;
	int j=n,count=0;
	for(i=0,j=n-1;i<n;i++)
	{
		arr1[i]=arr[j-i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr1[i])
		count++;
		else
		break;
	}
	if(count==n)
	printf("The string you enterd is palindrome.\n");
	else
	printf("The string you entered is not palindrome.\n");
}
int main()
{	
	char arr[100];
	printf("Enter the string you want the reverse of.\n");
	gets(arr);
	Revers_of_String(arr);
	getch();
}
