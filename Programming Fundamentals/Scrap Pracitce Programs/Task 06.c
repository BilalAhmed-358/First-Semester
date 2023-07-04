#include<stdio.h>
#include<string.h>
#include<conio.h>
void average_marks(float marks[5][20])
{	
	int i,j;
	float sum=0,avg=0;
	for(i=0;i<5;i++)
	{	sum=0;avg=0;
		for(j=0;j<20;j++)
		{
			sum=sum+marks[i][j];
		}
		avg=sum/20;
		printf("The average marks obtained by students in course %d are %.2f\n",i+1,avg);
		}
}
int main()
{
	int i,j;
	float marks[5][20];
	for(i=0;i<5;i++)
	{	printf("Enter the marks of students in course number %d\n",i+1);
		for(j=0;j<20;j++)
		{
			printf("Enter the marks obtained by student number %d in course number %d\n",j+1,i+1);
			scanf("%f",&marks[i][j]);
		}
	}
	average_marks(marks);

}

