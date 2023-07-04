#include<stdio.h>
#include<string.h>
#include<conio.h>
void fibonacci(int n);
int main()
{	
	int n;
	printf("How many digits of the fibonacci series do you want to print?\n");
	scanf("%d",&n);
	fibonacci(n);
}
void fibonacci(int n)
{
	int a=0,b=1,c,i=0;
	printf("%d, %d, ",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("%d, ",c);
		a=b;
		b=c;
	}
}
