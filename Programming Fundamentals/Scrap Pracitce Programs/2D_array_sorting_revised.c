#include <stdio.h>
#include <conio.h>
void display(int matrix[6][4])
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d    ", matrix[i][j]);
        }
        printf("\n");
    }
}
void sort(int matrix[6][4])
{
    int i, j, k = 0, l = 0, temp;
    for (i = 0; i < 6; i++)
    {
        for (k = 0; k < 4; k++)
        {
            for (l = k + 1; l < 4; l++)
            {
                if (matrix[i][k] > matrix[i][l])
                {
                    temp = matrix[i][k];
                    matrix[i][k] = matrix[i][l];
                    matrix[i][l] = temp;
                }
            }
        }
    }
}
int main()
{
    int i = 0, j = 0;
    int matrix[6][4] = {{4, 3, 2, 1}, {8, 7, 6, 5}, {12, 11, 10, 9}, {16, 15, 14, 13}, {20, 19, 18, 17}, {24, 23, 22, 21}};
    printf("Matrix before arranging\n");
    display(matrix);
    sort(matrix);
    printf("Matrix after arranging\n");
    display(matrix);
}