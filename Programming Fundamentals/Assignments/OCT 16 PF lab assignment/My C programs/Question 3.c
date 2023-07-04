#include<stdio.h>
int main()
{int age,fare;
printf("Please Enter you age\n");
scanf("%d", &age);
if (age<=11)
	{fare=20;
	printf("Your fare is %d\n", fare);
	}
else if (age>=65)
	{fare =30;
	printf("Your fare is %d\n", fare);
	}
else if (11<age<65)
	{fare= 50;
	printf("Your fare is %d\n", fare );
	}

return 0;

}
