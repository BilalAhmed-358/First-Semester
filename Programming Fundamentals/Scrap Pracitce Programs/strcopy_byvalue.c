#include<stdio.h>
#include<string.h>

void    stringcopy(char arr1[])
{
    char arr2[1000];
    int n=strlen(arr1),i;
    for ( i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("The string which is the copy of the other string is as follows:\n");
    puts(arr2);
    
}
int main()
{
    char arr1[1000];
    printf("Enter the array you want the copy of\n");
    gets(arr1);
    stringcopy(arr1);
}
