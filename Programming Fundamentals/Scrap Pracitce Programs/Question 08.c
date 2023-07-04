#include<stdio.h>
int main()
{
	int maths,phy,chem,total;
	printf("Enter you marks in Maths, Physics, Chemistry:\n");
	scanf("%d%d%d",&maths,&phy,&chem);
	total=maths+phy+chem;
	if(phy>=65&&maths>=55&&chem>=55&&total>=180&&(maths+phy)>=140)
	printf("Congratulations!!!, You are elgible!!!\n");
	else
	printf("You are not elgible");
}
