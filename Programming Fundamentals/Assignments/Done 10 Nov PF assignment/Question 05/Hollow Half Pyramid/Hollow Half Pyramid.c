#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=1,count=1,number=1;
	printf("Enter the number of rows you want in your half triangle...\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(count=1;count<=j;count++)
		{	for(number;number<=count;number++)
		{
			if(count==1||count==j||j==n)
			printf("%d",number);
			else
			printf(" ");
		}}
		number=1;
		printf("\n");
	}
	getch();
}
