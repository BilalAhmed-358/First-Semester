#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j=1,n,num=2,num1=2;
	printf("How many rows do you want in your triangle?\n");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j==(n+1-i))
			{
				{
				printf("1 ");
				}
			}
			else if(j==(n-1+i)&&j!=n+1-i)
			{
				{
				printf("%d ",num);
				num++;
				}
			}
			else if(i==n&&j%2!=0)
			{
				{
				printf("%d ",num1);
				num1++;
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
}

