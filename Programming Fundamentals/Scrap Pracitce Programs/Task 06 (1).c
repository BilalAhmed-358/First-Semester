#include<stdio.h>
#include<string.h>
#include<conio.h>
void average_marks(int marks[20][5])
{	
	int i,j,sum,avg;
	for(i=0;i<5;i++)
	{	sum=0;
		printf("The average marks obtained by students in course %d are ",i+1);
		for(j=0;j<20;j++)
		{
			sum+=marks[i][j];
		}
		avg=sum/20;
		printf("%d\n",avg);
		}	
}
int main()
{
	int marks[5][20],i,j;
	for(i=0;i<5;i++)
	{	printf("Enter the marks of students in course number %d\n",i+1);
		for(j=0;j<20;j++)
		{
			printf("Enter the marks obtained by student number %d in course number %d\n",j+1,i+1);
			scanf("%d",&marks[i][j]);
		}
	}
	average_marks(marks);

}

