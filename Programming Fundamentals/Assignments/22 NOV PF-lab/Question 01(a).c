#include<stdio.h>
int factorial(int n);
int main()
{
	int n;
	printf("Enter the nubmer you want to calculate the factorial of\n");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
	if(n==1)
	return n;
	else
	n=n*factorial(n-1);
}
