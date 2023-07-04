#include<stdio.h>
#include<conio.h>
#include<string.h>
void display_encry(FILE *fp);
void display(FILE *fp);
int main()
{
    FILE *fp,*ft;
    printf("Contents of the file before encryption\n");
    fp=fopen("text.txt","r");   
    display(fp);
    rewind(fp);
    ft=fopen("duplicate.txt","w");
    char ch=fgetc(fp);
    while ((ch = fgetc(fp)) != EOF)
    {   ch+=100;
        fprintf(ft,"%c", ch);
    }
    fclose(ft);fclose(fp);
    getchar();
    remove("text.txt");
    rename("duplicate.txt","text.txt");
    printf("Contents of the file after encryption\n");
    ft=fopen("text.txt","r");
    display(ft);
    fclose(ft);
    ft=fopen("text.txt","r");
    printf("Contents of the file after dencryption\n");
    display(ft);
}
void display(FILE *fp)
{
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
}
void display_dencry(FILE *fp)
{
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {   ch-=100;
        printf("%c", ch);
    }
    printf("\n");
}