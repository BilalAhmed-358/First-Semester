#include<stdio.h>
int main()
{	double a,b,c;
	char operator;
	printf("Enter the operation you want to perform\n");
	scanf("%c",&operator);
	switch(operator)
	{
		case '+':
			printf("Enter the first and the second number\n");
			scanf("%lf%lf", &a,&b);
			c=a+b;
			printf("The answer is %lf",c);break;
		case '-':
			printf("Enter the first and the second number\n");
			scanf("%lf%lf", &a,&b);
			c=a-b;
			printf("The answer is %lf",c);break;
		case '*':
			printf("Enter the first and the second number\n");
			scanf("%lf%lf", &a,&b);
			c=a*b;
			printf("The answer is %lf",c);break;
		case '/':
			printf("Enter the first and the second number\n");
			scanf("%lf%lf", &a,&b);
			c=a/b;
			printf("The answer is %lf",c);break;
	}
	getch();
	return 0;
}
