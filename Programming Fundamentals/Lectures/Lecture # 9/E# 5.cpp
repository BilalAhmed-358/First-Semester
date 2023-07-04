#include<stdio.h>
	main()
{
	float num1,num2;
	float res;
	printf("Enter First Number: ");
	scanf("%f",&num1);

	printf("Enter Second Number: ");
	scanf("%f",&num2);
	res=num1+num2;
	printf("The sum of two numbers is: %d\n", res);
	res=num1*num2;
	printf("The product of two numbers is: %d\n", res);
	res=num1/num2;
	printf("The divison of two numbers '%' is: %.2f\n", num1/num2);
	res=num1-num2;
	printf("The subtraction of two numbers is: %d\n", res);

}

