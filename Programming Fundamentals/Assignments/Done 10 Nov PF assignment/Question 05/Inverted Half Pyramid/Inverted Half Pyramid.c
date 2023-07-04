#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=1,count1=1,count=1;
	printf("Enter the number of rows you want in your half triangle...\n");
	scanf("%d",&n);
	j=n;
	while(n>=count1)
	{	
		while(j>=count)
		{	
			printf("%d ",count);
			count++;
		}
		printf("\n");
		j--;
		count=1;
		count1++;
	}
	getch();
}
