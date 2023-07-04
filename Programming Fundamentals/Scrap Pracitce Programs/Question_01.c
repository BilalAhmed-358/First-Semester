#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int rows = 4 ,kernel_rows, cols = 4, kernel_cols, stride, i = 0, j = 0, x = 0, y = 0, max_val = 0;
    printf("<----------This program only performs the max pooling of a 4x4 matrix---------->\n");
    printf("What is the stride?:");
    scanf("%d", &stride);
    printf("How many rows in filter?:\n");
    scanf("%d", &kernel_rows);
    printf("How many columns in filter?:\n");
    scanf("%d", &kernel_cols);
    int pl_cols = ((cols - kernel_cols) / (stride)) + 1;
    int pl_rows = ((rows - kernel_rows) / (stride)) + 1;
    int input_matrix[rows][cols];
    printf("Values for matrix:\n");
    for (i = 0; rows>i; i++)
    {
        for (j = 0;cols>j; j++)
        {
            scanf("%d", &input_matrix[i][j]);
        }
    }

    struct pool_matrix
    {
        int pl_rows;
        int pl_cols;
        int pl_matrix[pl_rows][pl_cols];
    };

    struct pool_matrix pool;
    for (x = 0; x < pl_rows; x++)
    {
        for (y = 0; y < pl_cols; y++)
        {
            max_val = -999;
            for (i = x * stride; kernel_rows + x * stride > i; i++)
            {
                for (j = y * stride; kernel_cols + y * stride > j; j++)
                {
                    if (input_matrix[i][j] > max_val)
                    {
                        max_val = input_matrix[i][j];
                    }
                }
            }
            pool.pl_matrix[x][y] = max_val;
        }
    }
    printf("Pooled Matrix is:\n");
    for (i = 0; pl_rows>i; i++)
    {
        for (j = 0; pl_cols>j; j++)
        {
            printf("%d ", pool.pl_matrix[i][j]);
        }
        printf("\n");
    }
}