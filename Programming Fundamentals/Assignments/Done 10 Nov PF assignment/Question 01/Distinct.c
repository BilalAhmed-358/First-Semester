#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the first second and third number below\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("The distict values are as follows\n");
	if(a!=b&&a!=c&&c!=b)
	{
		printf("%d\n%d\n%d",a,b,c);
		}
	else if(a==b&&a!=c)
		{
		printf("%d\n%d",a,c);	
	}
	else if (a==c&&a!=b)
	{
		printf("%d\n%d",a,b);	
	}
	else if (b==c&&a!=b)
	{
		printf("%d\n%d",a,b);	
	}
	else if (a==b==c)
	{
		printf("%d",a);
	}
	
}
