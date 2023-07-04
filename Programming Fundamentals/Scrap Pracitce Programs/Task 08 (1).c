#include<stdio.h>
int main()
{
	int var;
	printf("Enter the variable...\n");
	scanf("%d",&var);
	while(var)
	{
		printf("var:%d\n",var);
		var--;
		if(var==88)
		break;
	}
	printf("Out of for-loop");
}
