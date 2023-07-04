#include <stdio.h>
#include <conio.h>
int main()
{
    int rows, columns, stride, filter_rows, filter_columns, i = 0, j = 0, k = 0, l = 0, max = 0;
    int *ptr_rows=&rows, *ptr_columns=&columns, *ptr_stride=&stride, *ptr_filter_rows=&filter_rows, *ptr_filter_columns=&filter_columns, *ptr_max =&max;
    printf("Enter the number of rows you want in the matrix\n");
    scanf("%d", &*ptr_rows);
    printf("Enter the number of columns you want in the matrix\n");
    scanf("%d", &*ptr_columns);
    printf("Enter the number of rows in the filter\n");
    scanf("%d", &*ptr_filter_rows);
    printf("Enter the number of columns in the filter\n");
    scanf("%d", &*ptr_filter_columns);
    printf("Enter the value of the stride\n");
    scanf("%d", &*ptr_stride);
    int matrix[rows][columns];
    printf("Enter the values of the matrix\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the value for the (%d,%d) position in the matrix\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix you entered is as follows:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int pooled_rows = ((*ptr_rows - *ptr_filter_rows) / (*ptr_stride)) + 1;
    int pooled_columns = ((*ptr_columns - *ptr_filter_columns) / (*ptr_stride)) + 1;
    struct pool
    {
        int pooled_rows;
        int pooled_columns;
        int pooled_matrix[pooled_rows][pooled_columns];
    };

    struct pool pool,*ptr_pool=&pool;
    for (k = 0; k < pooled_rows; k++)
    {
        for (l = 0; l < pooled_columns; l++)
        {
            max = -999;
            for (i = k * stride; i < filter_rows + k * stride; i++)
            {
                for (j = l * stride; j < filter_columns + l * stride; j++)
                {
                    if (matrix[i][j] > *ptr_max)
                    {
                        *ptr_max = matrix[i][j];
                    }
                }
            }
            ptr_pool->pooled_matrix[k][l]= *ptr_max;
        }
    }
    printf("The max pooled matrix with a stride of %d from the given matrix is:\n",stride);
    for (i = 0; i < pooled_rows; i++)
    {
        for (j = 0; j < pooled_columns; j++)
        {
            printf("%d ", ptr_pool->pooled_matrix[i][j]);
        }
        printf("\n");
    }
}