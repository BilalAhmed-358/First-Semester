#include <stdio.h>
int exponent(int base,int power);
int main()
{
	int base,power;
	printf("Enter the base:\n");
	scanf("%d",&base);
	printf("Enter the power:\n");
	scanf("%d",&power);
	printf("The value of %d raised to the power of %d is %d",base,power,exponent(base,power));
	getch();
}
int exponent(int base,int power)
{
	static int count=1;
	if(count<power)
	{
		base=base*exponent(base,power-1);
		count++;
	}
	return base;
}

