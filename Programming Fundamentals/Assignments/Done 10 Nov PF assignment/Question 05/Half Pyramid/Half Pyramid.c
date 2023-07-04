#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=1,count=1;
	printf("Enter the number of rows you want in your half triangle...\n");
	scanf("%d",&n);
	while(n>=count)
	{	
		while(count>=j)
		{	
			printf("%d ",j);
			j++;
		}
		printf("\n");
		j=1;
		count++;
	}
getch();
}

