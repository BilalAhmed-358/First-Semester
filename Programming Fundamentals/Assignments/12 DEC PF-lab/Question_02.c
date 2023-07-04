#include<stdio.h>
struct Time
    {  
       int hh;
       int mm;
       int ss; 
    }time1,time2,time3;
void main()
{
    
    printf("Enter the starting time in the following 24-hr format\nhh:mm:ss\n");
    scanf("%d %d %d",&time1.hh,&time1.mm,&time1.ss);
    printf("Enter the ending time in the following 24-hr format\nhh:mm:ss\n");
    scanf("%d %d %d",&time2.hh,&time2.mm,&time2.ss);
    time3.hh=time2.hh-time1.hh;
    time3.mm=time2.mm-time1.mm;
    time3.ss=time2.ss-time1.ss;
    if (time3.hh<0)
    {
     printf("Please enter a valid time interval\n");
     return;
    }
    if (time3.mm<0)
    {
        time3.hh--;
        time2.mm+=60;
        time3.mm=time2.mm-time1.mm;
    }
    if (time3.ss<0)
    {
        time3.mm--;
        time2.ss+=60;
        time3.ss=time2.ss-time1.ss;
    }
    
    printf("The elapsed time is %d:%d:%d\n",time3.hh,time3.mm,time3.ss);
    getchar();
}