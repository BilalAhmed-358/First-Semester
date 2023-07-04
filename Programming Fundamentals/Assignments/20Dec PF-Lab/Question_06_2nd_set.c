#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n, i = 0,j;
    char *ptr_string, input;
    printf("Enter the number of characters you want in the string\n");
    scanf("%d", &n);
    ptr_string = (char *)malloc(n * sizeof(char));
    printf("Enter the string below\n");
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        input = getchar();
        if (input == '\n')
        {
            break;
        }

        *(ptr_string + i) = input;
    }
    printf("The string you entered is as follows\n");
    for (j = 0; j < i; j++)
    {
        printf("%c", *(ptr_string + j));
    }
}
