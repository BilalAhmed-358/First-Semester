#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   int i;
    char str[50],sent1[50]="A",sent2[50]="B";
    for ( i = 0; i < 6; i++)
    {
        strcpy(str,sent1);
        printf("%s\n",str);
        strcpy(sent2,sent1);
    }
    
}