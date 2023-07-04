#include<stdio.h>
#include<conio.h>
int main()
{
 int matrix[5][5]={{1,2,3,45,5},{9,8,78,45,1},{-99,78,-99,45,-5},{5,4,7,8,9},{98,-7,-23,-45,-1}},(*ptr)[5]=matrix,max=-999,transpose[5][5],(*ptr2)[5]=transpose;
 printf("This is the original matrix\n");
 for (int i = 0; i < 5; i++)
 {
     for (int j = 0; j < 5; j++)
     {
         printf("%d   ",*(*(ptr+i)+j));
     }printf("\n");
     
 }
 
 for (int i = 0; i < 5; i++)
 {
     for (int j = 0; j < 5; j++)
     {
        *(*(ptr2+j)+i)=*(*(ptr+i)+j);
    }
     
 }
 printf("The transpose of the matrix is:\n");
 //printf("This is the original matrix\n");
 for (int i = 0; i < 5; i++)
 {
     for (int j = 0; j < 5; j++)
     {
         printf("%d   ",*(*(ptr2+i)+j));
     }printf("\n");
     
 }
 
   
}