#include <stdio.h>

int main(){
	float weight,height,BMI;
printf("Enter Weight: \n");
scanf("%f",&weight);
printf("Enter height: \n");
scanf("%f",&height);
BMI=weight*703/(height*height);
printf("The BMI is : %f",BMI);	
	
	
	
	
	
	
	return 0;
}
