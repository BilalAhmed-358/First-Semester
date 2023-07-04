#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("How many rows do you want in your triangle?\n");
	scanf("%d",&n);
	int count=n,num=n;
	for(i;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
			if(j==1||i==1||j==count)
			{
				printf("%d ",j+(i-1));
			}
			else
			printf("  ");
		}
		printf("\n");
		count--;
	}
	getch();
}
