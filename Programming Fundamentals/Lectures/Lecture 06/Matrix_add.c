#include <stdio.h>
int main() {
	int row, col;
	printf("Enter the dimensions of the matrix\n");
	scanf("%d %d", &row, &col);
	int a [row][col];
	int b [row][col];
	int c [row][col];
	int transpose [row][col];
	int i,j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("Enter the value of row %d, and column %d \n", i, j);
			scanf("%d %d", &a[i][j], &b[i][j]);
		}
	}
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++)
			c[i][j] = a[i][j]+ b[i][j];
	}
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++)
			printf("%6d ",c[i][j]);
		printf("\n");
	}
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++)
			transpose [i][j] = c [j][i];
	}
	printf("\nTranspose of the matrix is\n");
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++)
			printf("%6d ",transpose[i][j]);
		printf("\n");
	}

}
