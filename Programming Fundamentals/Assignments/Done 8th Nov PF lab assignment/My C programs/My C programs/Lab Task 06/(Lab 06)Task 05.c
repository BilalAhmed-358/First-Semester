#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,sum,temp,average;
	int salary[6]={50000,70000,55000,66000,67000,72000};
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(salary[i]>salary[j])
			{
				temp= salary[i];
				salary[i]=salary[j];
				salary[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		sum+=salary[i];
	}
	average=sum/6;
	printf("The sum is %d and the average is %d\nThe salary in ascending order is as follows\n", sum ,average);
	for(i=0;i<6;i++)
	{
		printf("%d\n",salary[i]);
	}
	
}
