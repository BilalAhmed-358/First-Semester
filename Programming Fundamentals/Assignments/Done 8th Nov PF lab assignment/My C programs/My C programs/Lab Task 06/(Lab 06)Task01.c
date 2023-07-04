#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	int arr[100];
	int value;
	
	for(i=0;i<100;i++)
	arr[i]=rand();
	
	
	for(i=0;i<100;i++)
	printf("The value of the element at %d position in the array is %d\n",i,arr[i]);	
	
	
	for(i=0;i<=100;i++)
	{	printf("Enter the value:\n");
		scanf("%d",&value);
		if(arr[i]==value)
		{
			printf("value found at %d\n",i);
			break;
		}
		else if (arr[i]!=value&&i==100)
		{
			printf("Sorry, value not found\n");
			break;}
	}
	getch();
}

