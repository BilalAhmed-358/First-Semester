#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j=1,num,number=1;
	printf("How many rows do you want in your pattern\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{ i;
		for(j=1,number=1;j<=num;j++)
		{	j;
			num;
			number;
			if(j<=i)
			{printf("%d ",number);
			number++;}
			else if(j>=i)
			printf("* ");
		}
		printf("\n");
		
	}
	getch();
}
