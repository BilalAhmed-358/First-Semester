#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char sentence[50];
    printf("Enter a string\n");fflush(stdin);
    gets(sentence);
    FILE *fp;
    fp=fopen("Sentence.txt","a");
    fprintf(fp,"The string is %s\n",sentence);
    fclose(fp);
}
