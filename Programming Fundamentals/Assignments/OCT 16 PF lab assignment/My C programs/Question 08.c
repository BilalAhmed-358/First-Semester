#include<stdio.h>
int main()
{
	int myage,sisterage;
	printf("Enter your age\n");
	scanf("%d",&myage);
	printf("Enter your sister's age\n");
	scanf("%d",&sisterage);
	if(myage==sisterage)
		printf("You both are of the same age");
	else if (myage>sisterage)
		printf("You are older of the two");
	else
		printf("Your sister is older of the two");
	getch();
}
