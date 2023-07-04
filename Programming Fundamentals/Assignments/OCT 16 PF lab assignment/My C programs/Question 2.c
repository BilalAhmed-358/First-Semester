#include<stdio.h>
int main()
{	
	char ch;
	printf("Please give your input...\n");
	scanf("%c", &ch);
	if ((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
		{
		printf("You have entered a character\n");
	}
	else if (ch>='1'&& ch<='9')
		{
		printf("You have entered a number\n");
	}
	else 
		{printf("You have entered a special character\n");
	}
}

