#include<stdio.h>
int main()
{int a,b;
printf("Enter the first number\n");
scanf("%d", &a);
printf("Enter the second number\n");
scanf("%d",&b);
 if(a==b)
	{printf("Both numbers are equal");
	}
else if(a>b)
	{printf("The numbers you gave are not equal and;\na is greater than b");
	}
else if (a<b)
	{printf("The numbers you gave are not equal and;\nb is greater than a");
	}
	getch();
}
