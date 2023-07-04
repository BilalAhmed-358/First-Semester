#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100],*ptr;
    printf("Enter a sentence\n");
    gets(sentence);
    int n=strlen(sentence);
    printf("The length of the string is %d\n",n);
    for (int i = 0; i < n; i++)
    {
      printf("%c ",sentence[i]);
    }
    
    
    
}