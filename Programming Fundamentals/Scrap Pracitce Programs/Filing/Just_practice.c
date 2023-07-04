#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char sent[50];
    printf("Enter a sentence less than 50 characters\n");fflush(stdin);
    gets(sent);
    FILE *fp;
    fp=fopen("Practice.txt","a");
    fputs(sent,fp);
    fprintf(fp,"\n");
    fclose(fp);
    fp=fopen("Practice.txt","r");
    printf("The contect saved in the file is as follows\n");
    char ch;
    while(  (ch=fgetc(fp)) != EOF )
    {
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    printf("\n\nThat's all folks!\nHope you liked the program!\n");
}