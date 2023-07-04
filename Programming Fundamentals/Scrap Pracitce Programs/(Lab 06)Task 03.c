#include<stdio.h>
int main()
{
	int temp[7],i=0,temporary,j=0;
	printf("Hi Doc! Enter the temps of waheed below:\n");
	for(i=0;i<7;i++)
	{	printf("Enter the temperature on day %d\n",i+1);
		scanf("%d",&temp[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<=6;j++)
		{
			if(temp[i]>temp[j])
			{
				temporary= temp[i];
				temp[i]=temp[j];
				temp[j]=temporary;
			}
		}
	}
	for(i=0;i<7;i++)
	printf("%d\n",temp[i]);
	printf("The lowest temperature is %d and the highest temperature is %d", temp[0],temp[6]);
	
}
