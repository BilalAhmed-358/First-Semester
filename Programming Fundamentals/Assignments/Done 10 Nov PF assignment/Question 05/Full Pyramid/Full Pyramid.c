#include<stdio.h>
#include<conio.h>
int main()
{
	int rows=1,columns=1,num,a;
	printf("How many rows do you want in your triangle?\n");
	scanf("%d",&num);
	for(rows;rows<=num;rows++)
	{	a=rows;;
		for(columns=1;columns<=2*num-1;columns++)
		{	
			if(columns>=num+1-rows&&columns<=num-1+rows)
			{
				printf("%d",a);
				columns<num?a++:a--;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}

