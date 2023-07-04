#include<stdio.h>
int main()
{
	int a,b,count=1;
	printf("Enter starting and ending range:\n");
	scanf("%d%d",&a,&b);
	if(a%3==0)
	{	printf("The factors of 3 within the give range are:\n");
		while(count<=b/3&&a<=b)
		{
			printf("%d\n",a);
			a=a+3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count-1);	
		}
	else if(a%3==1)
	{	printf("The factors of 3 within the give range are:\n");
		a+=2;
		while(count<=b/3&&a<=b)
		{
			printf("%d\n",a);
			a=a+3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count-1);	
		}
	else if(a%3==2)
	{	printf("The factors of 3 within the give range are:\n");
		a+=1;
		while(count<=b/3&&a<=b)
		{
			printf("%d\n",a);
			a=a+3;
			count++;
		}
		printf("Moreover, the number of factors is %d",count-1);	
		}	
	
}
