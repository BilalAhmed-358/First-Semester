#include <string.h>
#include <stdio.h>
int main()
{
    int n, i, j=0, len = 0;
    char sent1[100], sent2[100];
    printf("Enter a string\n");
    fflush(stdin);
    gets(sent1);
    printf("String before the removal of characters other than alphabets\n");fflush(stdin);
    puts(sent1);
    len = strlen(sent1);
    for (i = 0; i < len; i++)
    {
        printf("%d\n", (sent1[i] >= 'a' && sent1[i] <= 'z') || (sent1[i] >= 'A' && sent1[i] <= 'Z')||sent1[i]=='\0');
        if ((sent1[i] >= 'a' && sent1[i] <= 'z') || (sent1[i] >= 'A' && sent1[i] <= 'Z')|| sent1[i]==' ')
        { //printf("this\n");
            sent2[j]=sent1[i];j++;
        }
        
    }
	sent2[j]='\0';
	printf("The length of the string is %d\n",strlen(sent2));
    printf("\nAfter the removal of special characters the string becomes\n");fflush(stdin);
    puts(sent2);
}
