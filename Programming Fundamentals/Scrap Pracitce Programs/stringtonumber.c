#include<stdio.h>
#include<conio.h>
int main()
{
    char number[10];int num=0,i;
    printf("Enter a 3 digit number in string format\n");fflush(stdin);
    gets(number);
    for ( i = 0; i < 3; i++)
    {
       if (number[i]>=48&&number[i]<=57)
       {
           num=num*10+(number[i]-48);
       }
       
    }
    printf("The string %s after conversion to nubmer becomes %d",number,num);
    
}