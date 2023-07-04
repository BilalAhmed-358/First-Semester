int main()
{
	float weight, height;
	float BMI;
	printf("Enter your weight (in kilograms) and height (in meters): ");
	scanf("%",&weight);
	scanf("%",&height);
	//cin >> weight >> height;
	BMI = weight / (height * height);
	cout << "Your BMI is " << BMI << endl << endl;
	cout << "BMI VALUES\n";
	cout << "Underweight: less than 18.5\n";
	cout << "Normal: between 18.5 and 24.9\n";
	cout << "Overweight: between 25 and 29.9\n";
	cout << "Obese: 30 or greater\n";
}
