#include <stdio.h>

int main()
{
    int rows, columns, i = 0, j = 0, k = 0, l = 0, kernel_rows, kernel_columns, stride, max = -9999;
    printf("Enter the number of rows\n");
    scanf(" %d", &rows);
    printf("Enter the number of columns\n");
    scanf(" %d", &columns);
    printf("Enter the number of kernel rows\n");
    scanf(" %d", &kernel_rows);
    printf("Enter the number of kernel columns\n");
    scanf(" %d", &kernel_columns);
    printf("Enter the stride\n");
    scanf(" %d", &stride);
    int pooled_matrix_rows = ((rows - kernel_rows) / (stride)) + 1, pooled_matrix_columns = ((columns - kernel_columns) / (stride)) + 1;
    struct kernel
    {
        int rows[kernel_rows];
        int columns[kernel_columns];
        int pooled_matrix[pooled_matrix_rows][pooled_matrix_columns];
    } filter;
    int matrix[rows][columns], kernel_filter[kernel_rows][kernel_columns];
    printf("Enter the values of the matrix below\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the value for matrix[%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix you entered is as follows\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            
            scanf("%d", matrix[i][j]);
        }
    }

    for (i = 0; i < kernel_rows; i++)
    {
        for (j = 0; j < kernel_columns; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    printf("Max is %d", max);
    for (i = 0; i < pooled_matrix_rows; i++)
    {
        for (j = 0; j < pooled_matrix_columns; j++)
        {
            printf("%d ", filter.pooled_matrix[i][j]);
        }
        printf("\n");
    }
}