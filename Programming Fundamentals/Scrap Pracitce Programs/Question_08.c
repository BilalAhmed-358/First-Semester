#include <stdio.h>
#include <conio.h>
#include <string.h>
int i, j;
void SWAP(char (*ptr_family)[20],int i,int j);
void BUBBLE_SORT(char (*ptr_family)[20], char *ptr_covid);
void DISPLAY(char (*ptr_family)[20], char *ptr_covid);

int main()
{
    char family_member[][20] = {"Hina", "Sara", "Ali", "Zain", "Bakhtawar", "Hashim", "Zeeshan", "Jameela", "Asfa", "Zahid"};
    char covid_status[10] = {"PNPPNPNNNN"};
    char(*ptr_family)[20] = family_member;
    char *ptr_covid = covid_status;
    printf("Before sorting\n\n");
    DISPLAY(ptr_family, ptr_covid);
    BUBBLE_SORT(ptr_family, ptr_covid);
    printf("After sorting\n\n");
    DISPLAY(ptr_family, ptr_covid);
    printf("\nComplete");
}



void DISPLAY(char (*ptr_family)[20], char *ptr_covid)
{
    printf("FAMILY MEMBES:  ");
    for (i = 0; i < 10; i++)
    {
        printf("%s ", (ptr_family + i));
    }
    printf("\n");

    printf("\nCOVID STATUS:    ");
    for (i = 0; i < 10; i++)
    {
        printf("%c     ", *(ptr_covid + i));
    }
    printf("\n");
}



void BUBBLE_SORT(char (*ptr_family)[20], char *ptr_covid)
{
    char temp;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (*(ptr_covid + i) < *(ptr_covid + j))
            {
                temp = *(ptr_covid + i);
                *(ptr_covid + i) = *(ptr_covid + j);
                *(ptr_covid + j) = temp;
                SWAP(ptr_family,i,j);
            }
        }
    }
    printf("\n");
}


void SWAP(char (*ptr_family)[20],int i,int j)
{
    char sent[50];
    strcpy(sent,*(ptr_family+i));
    strcpy(*(ptr_family+i),*(ptr_family+j));
    strcpy(*(ptr_family+j),sent);
}
