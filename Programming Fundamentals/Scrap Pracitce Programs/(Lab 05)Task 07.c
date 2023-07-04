#include<stdio.h>
#include<conio.h>
int main()
{
	long long number,exponent,answer , count=1;
	printf("Enter the number\n");
	scanf("%lld",&number);
	printf("Enter the exponent\n");
	scanf("%lld", &exponent);
	for(exponent;exponent>=count;count++)
	{
		if(count==1)
		answer=number*count;
		else if( count!=1)
		answer*=number;
	}
printf("The answer if %d",answer);
}
