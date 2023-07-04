#include <stdio.h>
#include <conio.h>
void swap(int (*ptr)[5])
{
    int i, j;
    int fir,sec;
    for ( i = 0; i < 5; i++)
    {  fir=*(*(ptr+i)+0);sec=*(*(ptr+i)+1);
        for ( j = 0; j < 3; j++)
        {
            *(*(ptr+i)+j)=*(*(ptr+i)+j+2);
        }
        *(*(ptr+i)+3)=fir;*(*(ptr+i)+4)=sec;
        
    }
    
    
}
int main()
{
    int arr[5][5];
    int i, j;
    printf("Enter the values in the 5x5 matrix\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {   fflush(stdin);
            scanf("%d", &arr[i][j]);
        }
    }
    int (*ptr)[5] =arr;
    printf("Before swapping the matrix is\n");
    for (i = 0; i < 5; i++)
    {
        for ( j = 0;j < 5; j++)
        {
            printf("%d   ",arr[i][j]);
        }printf("\n");
        
    }
    swap(ptr);
    printf("After swapping the matrix becomes\n");
    for (i = 0; i < 5; i++)
    {
        for ( j = 0;j < 5; j++)
        {
            printf("%d   ",arr[i][j]);
        }printf("\n");
        
    }
}