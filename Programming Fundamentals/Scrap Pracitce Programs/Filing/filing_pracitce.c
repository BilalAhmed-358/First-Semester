#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void display(FILE *fp);
int main()
{
    int line_no = 1, del_line_no = 0;
    char ch;
    FILE *fp, *ft;
    printf("Contents of the file before deleting the file\n\n");
    fp = fopen("text.txt", "r");
    //printf("\n\n");

    display(fp);
    rewind(fp);

    printf("\n\n");
    printf("Enter the number of line you want to delete\n");
    scanf("%d", &del_line_no);

    ft = fopen("extra.txt", "w");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            line_no++;
        }
        if (line_no != del_line_no)
        {
            fprintf(ft, "%c", ch);
        }
    }
    printf("\n\nFile after deletion\n\n");
    fclose(ft);fclose(fp);
    ft = fopen("extra.txt", "r");
    display(ft);
    fclose(ft);
    remove("text.txt");
    fflush(stdin);
    rename("extra.txt","text1.txt");
    
}
void display(FILE *fp)
{
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}