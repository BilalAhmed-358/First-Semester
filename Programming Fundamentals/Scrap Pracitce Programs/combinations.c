#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i){
				if(i%2==0&&j%2!=0)
				printf("%d ",num++);
				else if(i%2!=0&&j%2==0)
				printf("%d ",num++);}
			else
			printf(" ");
		}
		printf("\n");
	}
}
