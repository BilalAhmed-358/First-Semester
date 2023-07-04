#include<stdio.h>
#include<conio.h>
#include<string.h>
void eligibility_criteria(int maths,int phy,int chem,int total);
int main()
{
	int maths,phy,chem,total;
	printf("Enter the marks obtained in maths\n");
	scanf("%d",&maths);
	printf("Enter the marks obtained in phy\n");
	scanf("%d",&phy);
	printf("Enter the marks obtained in chem\n");
	scanf("%d",&chem);
	total=maths+phy+chem;
	eligibility_criteria(maths,phy,chem,total);
}
void eligibility_criteria(int maths,int phy,int chem,int total)
{	
	if(phy>=65&&maths>=55&&chem>=55&&total>=180&&(maths+phy)>=140)
	printf("Congratulations, You are elgible!!!\n");
	else
	printf("Sorry,You are not elgible\nBetter luck next time.");
}
