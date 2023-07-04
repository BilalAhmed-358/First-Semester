#include<stdio.h>
int main()
{	float height,weight,BMI;
	printf("Enter your height(in m) and weight (in kg)\n");
	scanf("%f%f",&height,&weight);
	BMI=(weight)/(height*height);
	printf("Dear user your BMI is %f/n", BMI);
	getch();
	}
