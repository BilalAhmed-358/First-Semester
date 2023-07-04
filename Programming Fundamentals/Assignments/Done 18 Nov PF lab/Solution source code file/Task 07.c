#include<stdio.h>
#include<conio.h>
#include<string.h>
void multiples_of_3(int max, int min);
int main()
{
	int max,min;
	printf("Enter the starting and ending value of the range\nThe minimum value must be greater than or equal to 3\n");
	scanf("%d%d",&max,&min);
	multiples_of_3(min,max);
}
void multiples_of_3(int max, int min)
{	
	int count=0;
	if(min%3==0)
	{
		printf("The factors of 3 within the give range are:\n");
		while(min<=max)
		{
			printf("%d\n",min);
			min+=3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count);
	}
	else if(min%3==1)
	{
		printf("The factors of 3 within the give range are:\n");
		min+=2;
		while(min<=max)
		{
			printf("%d\n",min);
			min+=3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count);
	}
	else if(min%3==2)
	{
		printf("The factors of 3 within the give range are:\n");
		min+=1;
		while(min<=max)
		{
			printf("%d\n",min);
			min+=3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count);
	}
}
