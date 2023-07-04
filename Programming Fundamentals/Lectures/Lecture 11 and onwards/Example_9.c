#include <stdio.h>
int main()
{
	float percentage;
	printf("Enter the paercentage : \n");
	scanf("%f", &percentage);
	if(percentage >=50 && percentage <=59.99)
		printf("C Grade");
	else if(percentage >=60 && percentage <=69.99)
		printf("B Grade");
	else if(percentage >=70 && percentage <=79.99)
		printf("A Grade");
	else if(percentage >= 80 && percentage<= 100)
		printf("A+ Grade");
	 else if(percentage >= 1 && percentage<= 40.99)
		printf("F Grade");

	else 
		printf("Invalid value");
	
	//else
}
