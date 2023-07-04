#include<stdio.h>
void rectangle(int rows,int columns)
{   int i;
    int static k=1;
    if(rows>=k)
    {
        for ( i = 0; i < columns; i++)
        {
            printf("* ");
        }
        printf("\n");
        rows--;
        rectangle(rows,columns);
        
    }
    else
    {
        return;
    }
    
}
    int main()
    {
        int rows, columns;
        printf("How many rows and columns do you want in your rectangle?\nEnter them below\n");
        scanf("%d", &rows);
        scanf("%d", &columns);
        rectangle(rows,columns);
    }
