#include<stdio.h>
#include<conio.h>
int main()
{
    int month,day;
    printf("Enter the number of the month you were born in\nFor Example\nFor Jaunuary enter 01\nFor February enter 02\n");
    scanf("%d",&month);
    printf("Enter the day you were born\n");
    scanf("%d",&day);
    if((month==1&&day<=19)||(month==12&&day>=22))
    printf("Your zodaic sign is Capricorn");
    else if((month==1&&day>=20)||(month==2&&day<=17))
    printf("Your zodaic sign is Aquarius");
    else if((month==2&&day>=18)||(month==3&&day<=19))
    printf("Your zodaic sign is Pisces");
    else if((month==3&&day>=20)||(month==4&&day<=19))
    printf("Your zodaic sign is Aries");
    else if((month==4&&day>=20)||(month==5&&day<=20))
    printf("Your zodaic sign is Taurus");
    else if((month==5&&day>=21)||(month==6&&day<=20))
    printf("Your zodaic sign is Gemini");
    else if((month==6&&day>=21)||(month==7&&day<=22))
    printf("Your zodaic sign is Cancer");
    else if((month==7&&day>=23)||(month==8&&day<=22))
    printf("Your zodaic sign is Leo");
    else if((month==8&&day>=23)||(month==9&&day<=22))
    printf("Your zodaic sign is Virgo");
    else if((month==9&&day>=23)||(month==10&&day<=22))
    printf("Your zodaic sign is Libra");
    else if((month==10&&day>=23)||(month==11&&day<=21))
    printf("Your zodaic sign is Scorpio");
    else if((month==11&&day>=22)||(month==12&&day<=21))
    printf("Your zodaic sign is Sagittarius");
    getch();
}