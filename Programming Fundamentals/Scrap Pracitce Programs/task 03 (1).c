#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=101,count=0;
	printf("How many three digit odd numbers you want?\n");
	scanf("%d",&n);
	printf("The list is as follows\n");
	while(n>=count&&a<=999)
		{
		printf("%d\n",a);
		a+=2;
		count++;
	}
	getch();
}
