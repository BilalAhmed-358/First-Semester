#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter the x co-ordinates and the y co-ordinates\n");
	scanf("%f%f",&x,&y);
	if(x>=0&&y>=0)
	printf("Your point lies in the 1st quadrant\n");
	if(x<0&&y>=0)
	printf("Your point lies in the 2nd quadrant\n");
	if(x<0&&y<0)
	printf("Your point lies in the 3rd quadrant\n");
	if(x>=0&&y<0)
	printf("Your point lies in the 4th quadrant\n");
}
