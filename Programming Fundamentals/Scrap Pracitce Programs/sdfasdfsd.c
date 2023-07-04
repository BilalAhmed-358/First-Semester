#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int func_stringlength(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    return i;
}
void    stringcopy(char arr1[])
{
    char arr2[1000];
    int n=func_stringlength(arr1),i;
    for ( i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("The string which is the copy of the other string is as follows\n");
    puts(arr2);
    
}
int main()
{
    // char arr1[1000];
    // printf("Enter the array you want the copy of\n");
    // gets(arr1);
    // stringcopy(arr1);
    // int i=10;char c='a'; float f=8.22;
    // void *ptr;
    // ptr=&i;
    // printf("The value of and integer variable printed with the help of a void pointer is  %d\n",*(int*)ptr);
    // ptr=&c;
    // printf("The value of and character variable printed with the help of a void pointer is  %c\n",*(char*)ptr);
    // ptr=&f;
    // printf("The value of and float variable printed with the help of a void pointer is  %.1f\n",*(float*)ptr);
    //use of malloc
    // int n;
    // printf("How many elements do you want in the array\n");
    // scanf("%d",&n);
    // int *ptr;
    // ptr=(int *)malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of element at position %d in the array\n",i+1);
    //     //scanf("%d",&ptr[i]);
    // }
    // printf("The value you stored in the arrays are\n");
    // for ( int i = 0; i < n; i++)
    // {
    //     printf("The value of the element at position %d in the array is %d\n",i+1,ptr[i]);
    // }
    // Use of calloc
    int k;
    printf("How many elements do you want in the array\n");
    scanf("%d",&k);
    int *ptt;
    ptt=(int *)calloc(k,sizeof(int));
    for (int i = 0; i < k; i++)
    {
        printf("Enter the value of element at position %d in the array\n",i+1);
        scanf("%d",&ptt[i]);
    }
    printf("The value you stored in the arrays are:\n");
    for ( int i = 0; i < k; i++)
    {
        printf("The value of the element at position %d in the array is %d\n",i+1,ptt[i]);
    } 
    // use of realloc
     //int k;
    printf("How many elements do you want in the new array\n");
    scanf("%d",&k);
    //int *ptt;
    ptt=(int *)realloc(ptt,k*sizeof(int));
    for (int i = 0; i < k; i++)
    {
        printf("Enter the value of element at position %d in the array\n",i+1);
        scanf("%d",&ptt[i]);
    }
    printf("The value you stored in the arrays are:\n");
    for ( int i = 0; i < k; i++)
    {
        printf("The value of the element at position %d in the array is %d\n",i+1,ptt[i]);
    }
    free(ptt);     
}

