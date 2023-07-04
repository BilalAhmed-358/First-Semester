#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    printf("\t\t<------------This file will copy the contents of one file in to the other file------------------->\n");
    char ch;
    FILE *fp, *ft;
    fp = fopen("Practice.txt", "r");
    ft = fopen("Practice_copy.txt", "w");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 97 && ch <= 122)
        {
            ch-=32;
        }

        fprintf(ft, "%c", ch);
    }
    fclose(fp);
    fclose(ft);
    printf("The contents copied in the file are as follows\n\n\n");
    ft = fopen("Practice_copy.txt", "r");
    while ((ch = fgetc(ft)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(ft);
    printf("\nThat's all folks!\nHope you like my programming skills\n");
}