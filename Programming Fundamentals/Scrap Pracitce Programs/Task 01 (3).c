#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0;
	printf("Enter a number...\n");
	scanf("\n%d",&num);
	sum=sum+num;
	while(num>=200&&num<=400)
	{
		printf("Enter a number...\n");
		scanf("\n%d",&num);
		sum=num+sum;
	}
	printf("The sum of the numbers you entered is %d",sum);
}
