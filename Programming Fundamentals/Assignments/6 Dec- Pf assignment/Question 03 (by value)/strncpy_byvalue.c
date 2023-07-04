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
char strncpy(char arr1[],char arr2[],int n)
{
    int i;
    //n=func_stringlength(arr2);
    
    for ( i = 0; i <n ; i++)
    {
        arr1[i]=arr2[i];
    }
    printf("After putting the given characters of string 2 in string 1\nString 1 becomes\n");
    puts(arr1);
    
}
int main()
{
    char arr1[1000],arr2[1000];
    int n;
    printf("Enter the first string\n");
    gets(arr1);
    printf("Enter the second string\n");
    gets(arr2);
    printf("Enter the number of character you want to copy form string 2 to string 1\n");
    scanf("%d",&n);
    strncpy(arr1,arr2,n);
}
