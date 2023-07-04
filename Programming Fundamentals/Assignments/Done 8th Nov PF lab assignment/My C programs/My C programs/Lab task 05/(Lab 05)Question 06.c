#include<stdio.h>
#include<conio.h>
int main()
{
	int rows,columns,count=1;
	printf("How many rows do you want in your half pyramid\n");
	scanf("%d",&rows);
	for(rows;rows>=columns;columns++)
	{
		for(count=1;count<=columns;count++)
		{
			printf("%d",columns);
			
			
		}
		printf("\n");
	}
}
