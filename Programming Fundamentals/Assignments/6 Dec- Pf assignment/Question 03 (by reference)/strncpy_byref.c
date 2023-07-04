#include<stdio.h>
char my_strncpy(char *arr1,char *arr2,int *n)
{
    int i;
    for ( i = 0; i <*n ; i++)
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
    char *ptr1=&arr1[0],*ptr2=&arr2[0];
    int *ptr3=&n;
    my_strncpy(ptr1,ptr2,ptr3);
}