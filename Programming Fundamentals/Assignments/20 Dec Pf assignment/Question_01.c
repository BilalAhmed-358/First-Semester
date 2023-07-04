#include <stdio.h>
int main()
{
    int date, year, month, month_for_calc, digit_3_4, digit_1_2, final_value, final_day,temp;
    printf("Enter the date:\n");
    scanf("%d", &date);
    printf("Enter the month:\nSuch as 1 for Jan, 2 for Feb and so on...\n");
    scanf("%d", &month);
    printf("Enter the year:\n");
    scanf("%d", &year);
    switch (month)
    {
    case 1:month_for_calc = 11;
    break;
    case 2:month_for_calc = 12;
    break;
    case 3:month_for_calc = 1;
    break;
    case 4:month_for_calc = 2;
    break;
    case 5:month_for_calc = 3;
    break;
    case 6:month_for_calc = 4;
    break;
    case 7:month_for_calc = 5;
    break;
    case 8:month_for_calc = 6;
    break;
    case 9:month_for_calc = 7;
    break;
    case 10:month_for_calc = 8;
    break;
    case 11:month_for_calc = 9;
    break;
    case 12:month_for_calc = 10;
    break;
    }
    if (month_for_calc == 11 || month_for_calc == 12){
        year--;
    }
    digit_3_4 = year % 100;  digit_1_2 = year / 100;
    final_value = date + ((((13 * month_for_calc) - 1) / 5) + digit_3_4 + (digit_3_4 / 4) + (digit_1_2 / 4) - 2 * digit_1_2);
    if (final_value > 0){
        final_day = final_value % 7;
    }
    else if(final_value<0){
        temp=final_value%7;
        final_day=7+temp;
    }
    switch (final_day)
    {
    case 0:printf("The day on the given date is Sunday\n");
    break;
    case 1:printf("The day on the given date is Monday\n");
    break;
    case 2:printf("The day on the given date is Tuesday\n");
    break;
    case 3:printf("The day on the given date is Wednesday\n");
    break;
    case 4:printf("The day on the given date is Thursday\n");
    break;
    case 5:printf("The day on the given date is Friday\n");
    break;
    case 6:printf("The day on the given date is Saturday\n");
    break;
    }
}