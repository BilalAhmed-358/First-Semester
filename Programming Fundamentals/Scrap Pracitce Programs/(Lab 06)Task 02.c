#include<stdio.h>
int main()
{
	char str[100],a;
	int count,freq;
	printf("Enter a string:\n");
	gets(str);
	int i=strlen(str);
	printf("Enter the character you want to check the frequency of\n");
	scanf("%c",&a);
	for(count=0;count<=i;count++)
	{
		if(str[count]==a)
		{
			freq++;
		}
	}
	printf("The frequency of %c in the given string is %d",a,freq);
	
}
