#include<stdio.h>
int main()
{
	int a=0,b=1,count=2,n,c;
	printf("How many numbers of fibonacci series do you want?\n");
	scanf("%d",&n);
	printf("The fibonacci series is printed below:\n");
	if(n==1)
	printf("0\n");
	else if(n==2)
	printf("0\n1");
	else if(n>2)
	{
		printf("0\n1\n");
		while(n>count)
		{
			printf("%d\n",c=a+b);
			a=b;
			b=c;
			count++;
		}
		printf("---------------------THE END---------------------");
	}
	
}
