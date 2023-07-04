#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=0,count=0,nature=0;
	printf("Enter the number you want to have a checkerboard design of...\n");
	scanf("%d",&n);
	printf("Your checkerboard design is as follows\n");
	while(n>count)
	{
		while(nature%2==0)
		{
			while(n>j)
			{
			printf("* ");
			j++;
			}
			printf("\n");
			j=0;
			count++;
			nature++;
		}
		while(nature%2==1)
		{
			while(n>j)
			{
			printf(" *");
			j++;
			}
			printf("\n");
			j=0;
			count++;
			nature++;
		}
	}
}
