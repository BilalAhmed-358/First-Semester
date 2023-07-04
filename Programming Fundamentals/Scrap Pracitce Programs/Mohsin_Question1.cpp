#include<stdio.h>
///input matrix is 4x4 and the pooled matrix is 2x2
struct input {
	int num_rows;
	int num_cols;
	int matrix[4][4];
	int ans_matrix[2][2];
};

int main(){
	struct input mat;
	mat.num_rows=4;
	mat.num_cols=4;
	mat.matrix[0][0]=1;mat.matrix[0][1]=4;mat.matrix[0][2]=4;mat.matrix[0][3]=1;
	mat.matrix[1][0]=8;mat.matrix[1][1]=5;mat.matrix[1][2]=9;mat.matrix[1][3]=5;
	mat.matrix[2][0]=1;mat.matrix[2][1]=1;mat.matrix[2][2]=4;mat.matrix[2][3]=1;
	mat.matrix[3][0]=1;mat.matrix[3][1]=12;mat.matrix[3][2]=4;mat.matrix[3][3]=10;
	int max1=0,max2=0,max3=0,max4=0,i,j;
	
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			if(mat.matrix[i][j]>max1){
				max1=mat.matrix[i][j];
			}
		}
	}
	for(i=0;i<=1;i++){
		for(j=2;j<=3;j++){
			if(mat.matrix[i][j]>max2){
				max2=mat.matrix[i][j];
			}
		}
	}
	for(i=2;i<=3;i++){
		for(j=0;j<=1;j++){
			if(mat.matrix[i][j]>max3){
				max3=mat.matrix[i][j];
			}
		}
	}
	for(i=2;i<=3;i++){
		for(j=2;j<=3;j++){
			if(mat.matrix[i][j]>max4){
				max4=mat.matrix[i][j];
			}
		}
	}
	mat.ans_matrix[0][0]=max1;mat.ans_matrix[0][1]=max2;mat.ans_matrix[1][0]=max3;mat.ans_matrix[1][1]=max4;
	printf("The pooled matrix is :\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d ",mat.ans_matrix[i][j]);
		}printf("\n");
	}		
}
