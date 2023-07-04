#include <stdio.h>
#include <string.h>
void sortNumericArray(int arrnum[], int n)
{
    int i = 0, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arrnum[i] > arrnum[j])
            {
                temp = arrnum[i];
                arrnum[i] = arrnum[j];
                arrnum[j] = temp;
            }
        }
    }
}
void sortAlphabeticalArray(char arrchar[], int m)
{
    int i = 0, j = 0;
    char temp;
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (arrchar[i] > arrchar[j])
            {
                temp = arrchar[i];
                arrchar[i] = arrchar[j];
                arrchar[j] = temp;
            }
        }
    }
}
int main()
{
    int n, m, choice, i;
    char arrchar[1000];
    printf("Enter:\n1 for a numeric array\n2 for a character array\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("How many elements do you want in your numeric array?\n");
        scanf("%d", &n);
        int arrnum[n];
        printf("Enter the elements below:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arrnum[i]);
        }
        printf("The elements of the numeric array sorted in ascending order are as follows\n");
        sortNumericArray(arrnum, n);
        for (i = 0; i < n; i++)
        {
            printf("%d\n", arrnum[i]);
        }
    }
    else if (choice == 2)
    {
        printf("Enter the array:\n");
        fflush(stdin);
        gets(arrchar);
        m=strlen(arrchar);
        sortAlphabeticalArray(arrchar, m);
        printf("The elements of the character array sorted in ascending order are as follows\n");
        for ( i = 0; i < m; i++)
        {
            printf("%c",arrchar[i]);
        }
        
    }
    else
    {
        printf("Enter one of the given option otherwise the program will not work.\nNow we will have to re-run the program and this time Enter a valid option.");
    }
}
