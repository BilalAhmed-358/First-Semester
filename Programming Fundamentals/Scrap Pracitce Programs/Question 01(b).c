#include<stdio.h>
int count(int num);
int main()
{
	int num;
	printf("Enter the number you want to count the digits of\n");
	scanf("%d",&num);
	printf("The number of digits in %d are %d",num,count(num));
}
int count(int num)
{	static int counter=0;
	if(num>0)
	{
		counter++;
		count(num/10);
	}
	return counter;
	
}
