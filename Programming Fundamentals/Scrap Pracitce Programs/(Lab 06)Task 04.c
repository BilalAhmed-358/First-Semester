#include<stdio.h>
int main()
{	
	int a=0,b=0,c=0,i,arr[8],sum=0;
	printf("Enter any 8 intergers below:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}	
	for(i=0;i<8;i++)
	{
		if(arr[i]>0)
		{
			a++;
			sum+=arr[i];
		}
		else if(arr[i]<0)
		{
			b++;
		}
		else if(arr[i]==0)
		{
			c++;
		}
	}
	printf("The number of postitive numbers in the array you entered is %d and the sum of integers is %d\n",a,sum);
	printf("The number of negative numbers in the array you entered is %d\n",b);
	printf("The number of zeros in the array you entered is %d\n",c);
}
