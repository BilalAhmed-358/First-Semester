#include<stdio.h>
int pattern(int i);
int main()
{
	int i;
	printf("How many rows do you want in the loop\n");
	scanf("%d",&i);
	pattern(i);
}
int pattern(int i)
{
	int count=0,j=0;
	char chr='a';
	for(count;count<i;count++)
	{	
		for(j=0;j<i;j++)
		{
			printf("%c",chr);
		}
		printf("\n")
	}
}
