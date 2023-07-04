#include <stdio.h>
#include <conio.h>
int main()
{
    char creditcardno[16];
    printf("Enter the credit card number\n");
    fflush(stdin);
    gets(creditcardno);
    int i, j, sum1 = 0, sum2 = 0, digit = 0;
    for (i = 0; i < 16; i++)
    {
        digit = 0;
        if (i % 2 == 0)
        {
            digit = (creditcardno[i] - 48) * 2;
            if (digit >= 10)
            {
                digit = digit - 9;
            }
            //
            sum1 = sum1 + digit;
        }
        else
        {
            digit = (creditcardno[i] - 48);
            sum2+=digit; 
        }
        
    }
    if ((sum1+sum2)%10==0)
    {
        printf("Credit card is valid\n");
    }
    else
    {
        printf("Credit card is not valid\n");
    }
    
    
}