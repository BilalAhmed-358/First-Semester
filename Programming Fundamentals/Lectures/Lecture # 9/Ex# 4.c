main()
{
	float weight, height;
	float BMI;
	printf("Enter your weight (in pounds) and height (in inches): ");
	scanf("%f",&weight);
	scanf("%f",&height);
	//cin >> weight >> height;
	BMI = (weight*703) / (height * height);
	printf("Your BMI is %f", BMI,"\n\n");
	
	
}
