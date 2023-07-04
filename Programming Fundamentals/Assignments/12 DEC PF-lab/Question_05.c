#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
}Date1,Date2;

int main()
{
    printf("Enter the first Date below in this format Day/Month/Year:01/01/1001\n");
    scanf("%d %d %d",&Date1.day,&Date1.month,&Date1.year);
    printf("Enter the second Date below in this format Day/Month/Year:01/01/1001\n");
    scanf("%d %d %d",&Date2.day,&Date2.month,&Date2.year);
    if (Date1.day==Date2.day&&Date1.month==Date2.month&&Date1.year==Date1.year)
    {
        printf("The date are equal\n");
    }
    else
    {
        printf("The dates are not equal\n");
    }
    printf("The first date is :%d/%d/%d\n",Date1.day,Date1.month,Date1.year);
    printf("The second date is :%d/%d/%d",Date2.day,Date2.month,Date2.year);
    
    
}