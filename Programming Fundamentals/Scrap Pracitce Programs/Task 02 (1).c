#include<stdio.h>
int main()
{
	char a;
	int count=0;
	do
	{
		printf("Enter a character\n");
		scanf(" %c",&a);
		count=count+1;
	}
	while(a!='z'&&a!='Z');
	printf("The loop ran %d times",count);
}
