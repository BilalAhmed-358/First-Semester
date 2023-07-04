#include <string.h>
#include <stdio.h>
int main()
{
    int n, i, j=0, len = 0;
    char sent1[100], sent2[100];
    printf("Enter a string\n");
    fflush(stdin);
    gets(sent1);
    printf("String before the removal of characters other than alphabets\n");
    printf(sent1);
    len = strlen(sent1);
    for (i = 0; i < len; i++)
    {
        printf("%d\n", (sent1[i] >= 'a' && sent1[i] <= 'z') || (sent1[i] >= 'A' && sent1[i] <= 'Z'));
        if ((sent1[i] >= 'a' && sent1[i] <= 'z') || (sent1[i] >= 'A' && sent1[i] <= 'Z'))
        { //printf("this\n");
            j;
            sent2[j]=sent1[i];j++;
            printf("%c\n", sent2[i]);
        }
        if (sent1[i]=='\0')
        {
            break;
        }
        
    }
    printf("\nAfter the removal of special characters the string becomes\n");
    puts(sent2);
}