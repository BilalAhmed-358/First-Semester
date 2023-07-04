#include<stdio.h>
#include<conio.h>
#include<string.h>
void quadrant(float x,float y);
int main()
{
	float x,y;
	printf("Enter the values of x-coordinate and the y-coordinate\n");
	scanf("%f %f",&x,&y);
	quadrant(x,y);
}
void quadrant(float x,float y)
{	
	if(x>0&&y>0)
	printf("Your point lies in the 1st quadrant\n");
	else if(x<0&&y>0)
	printf("Your point lies in the 2nd quadrant\n");
	else if(x<0&&y<0)
	printf("Your point lies in the 3rd quadrant\n");
	else if(x>0&&y<0)
	printf("Your point lies in the 4th quadrant\n");
	else if(x==0&&y==0)
	printf("Your point lies on the origin\n");
	else if(x==0&&y>0)
	printf("Your point lies on the positive y-axis\n");
	else if(x==0&&y<0)
	printf("Your point lies on the negative y-axis\n");
	else if(y==0&&x>0)
	printf("Your point lies on the positive x-axis\n");
	else if(y==0&&x<0)
	printf("Your point lies on the negative x-axis\n");
}
