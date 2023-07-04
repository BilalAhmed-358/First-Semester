///This program is only worps for 4 by 4 matrix
#include <stdio.h>
#include <math.h>
int main()
{
    int rows = 4 ,fltr_rows, cols = 4, fltr_cols, stride, i = 0, j = 0, p = 0, q = 0, max_val = 0;
    printf("Enter the no of rows and column u want in your filter\n");
    scanf("%d %d", &fltr_rows,&fltr_cols);
    printf("Enter the stride\n");
    scanf("%d", &stride);
    int pol_cols = ((cols - fltr_cols) / (stride)) + 1;
    int pol_rows = ((rows - fltr_rows) / (stride)) + 1;
    printf("The pooled rows and cols are %d and %d\n",pol_rows,pol_cols);
    int input_matrix[rows][cols];
    printf("Enter the values for the 4x4 matrix:\n");
    for (i = 0; rows>i; i++)
    {
    for (j = 0;cols>j; j++)
    {
    scanf("%d", &input_matrix[i][j]);
    }
    }
    struct pool_matrix
    {
    int pol_rows;
    int pol_cols;
    int pol_matrix[pol_rows][pol_cols];
    };
    struct pool_matrix pool;
    for (p = 0; p < pol_rows; p++)
    {for (q = 0; q < pol_cols; q++)
    {max_val = -999;
    for (i = p * stride; fltr_rows + p * stride > i; i++)
    {for (j = q * stride; fltr_cols + q * stride > j; j++)
    {if (input_matrix[i][j] > max_val)
    {max_val = input_matrix[i][j];
    }
    }
    pool.pol_matrix[p][q] = max_val;
    }
    }
    }
    printf("Max pooled matrix:\n");
    for (i = 0; pol_rows>i; i++)
    {for (j = 0; pol_cols>j; j++)
    {printf("%d ", pool.pol_matrix[i][j]);
    }
    printf("\n");
    }
}


