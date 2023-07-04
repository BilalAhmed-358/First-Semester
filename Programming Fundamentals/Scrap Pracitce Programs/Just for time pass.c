int main(void) { int high, low, days, highest = 0, lowest = 0, lowday = 0, highday = 0; double average, maxTotal = 0, minTotal = 0;

printf("---=== IPC Temperature Analyzer ===---");

for (days = 1; days <= NUMS; days++) {

	do {

		printf("\nEnter the high value for day %d: ", days);
		scanf("%d", &high);

		printf("\nEnter the low value for day %d: ", days);
		scanf("%d", &low);

		if (high > 40 || low < -40 || high < low)
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");

	} 
                    while (high > 40 || low < -40 || high < low);

	if (high > highest) {
		highest = high;
	}
	if (low < lowest) {
		lowest = low;
	}
	
	maxTotal += high;
	minTotal += low;
}

average = (minTotal + maxTotal) / (NUMS * 2);

printf("\nThe average (mean) temperature was: %.2lf\n", average);
printf("The highest temperature was %d, on day %d\n", highest, highday);
printf("The lowest temperature was %d, on day %d\n", lowest, lowday);

return 0;
}
