#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	int arr[10];
	int value;
	
	for(i=0;i<10;i++)
	arr[i]=rand()%5;
	
	
	for(i=0;i<10;i++)
	printf("The value of the element at %d position in the array is %d\n",i,arr[i]);	
	
	
	for(i=0;i<=10;i++)
	{	printf("Enter the value:\n");
		scanf("%d",&value);
		if(arr[i]==value)
		{
			printf("value found\n");
			break;
		}
		else if (arr[i]!=value&&i==10)
		{
			printf("Sorry, value not found\n");
			break;}
	}
	getch();
}

