#include <stdio.h>
void main(){
	char letter = 'a';
	int numberofvowels, numberofspaces, numberofconstants;
	numberofvowels = 0;
	numberofspaces = 0;
	numberofconstants = 0;
	switch (letter){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			numberofvowels++;
			break;
		case ' ':
			numberofspaces++;
			break;
		default:
			numberofconstants++;
			break;
	}
	printf("Number of vowels is  : %d\n" ,numberofvowels);
	printf("Number of spaces is  : %d\n" ,numberofspaces);
	printf("Number of consonants is  : %d" ,numberofconstants);
}

