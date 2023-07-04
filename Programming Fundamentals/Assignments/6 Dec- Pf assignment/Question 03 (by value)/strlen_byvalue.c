#include<stdio.h>
int func_stringlength(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char arr[1000];
    printf("Enter the string below\n");
    gets(arr);
    printf("The length of the string is %d",func_stringlength(arr));
}