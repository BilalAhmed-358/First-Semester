#include<stdio.h>
#include<conio.h>
int main()
{
	int start,end,point;
	printf("Enter the starting point of the range\n");
	scanf("%d",&start);
	printf("Enter the ending point of the range\n");
	scanf("%d",&end);
	for(start;start<=end;start++)
	{
		if(start%5==0)
		{
			printf("%d\n",start);
		}

	}
}
