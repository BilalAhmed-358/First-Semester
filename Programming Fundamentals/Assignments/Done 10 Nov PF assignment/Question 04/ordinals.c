#include<stdio.h>
#include<conio.h>
int main()
{
	int n,count=1,ones=1,twos=2,thirds=3;
	printf("How many ordinals do you want to print\n");
	scanf("%d",&n);
	while(n>=count)
	{	while(count%10==1)
		{
		printf("%dst Hello\n",count);
		count++;
		}
		while(count%10==2)
		{
			printf("%dnd Hello\n",count);
			count++;
			
		}
		while(count%10==3)
		{
			printf("%drd Hello\n",count);
			count++;
		}
		while(count%10==4||count%10==5||count%10==6||count%10==7||count%10==8||count%10==9||count%10==0||count==11||count==12||count==13)
		{
			printf("%dth Hello\n",count);
			count++;
		}	
		
	}
}
