#include <stdio.h>
int rows, columns;
int count_ones(int matrix[rows][columns], int rows, int columns);

int main()
{
    int i, j;
    printf("Enter the number of rows in the matrix\n");
    fflush(stdin);
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix\n");
    fflush(stdin);
    scanf("%d", &columns);
    int matrix[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("\nEnter the value for (%d,%d) value of the matrix: ",i+1,j+1);
            fflush(stdin);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The number of 1s in the given matrix are %d",count_ones(matrix, rows, columns));
}

int count_ones(int matrix[rows][columns], int rows, int columns)

{
    int static i;
    int static j;
    int static count;
    if (i < rows)
    {
        if (j < columns)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
            j++;
            count_ones(matrix,rows,columns);
        }
        if (j == columns)
        {
            j = 0;
        }
        i++;
        count_ones(matrix,rows,columns);
    }
    return count;
}
