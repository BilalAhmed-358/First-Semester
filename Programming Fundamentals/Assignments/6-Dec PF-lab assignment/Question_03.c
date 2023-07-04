#include<stdio.h>
static int sumOddindex;
static int sumEvenindex;
void sortArray(int arr[])
{   int i,j,temp;
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if(arr[i]>arr[j])
            {   
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}
void sumEvenIndex(int *ptr1)
{
    
    sumEvenindex+=*ptr1;
    //printf("The sum of even numbers is %d\n",sum);
}
void sumOddIndex(int *ptr1)
{
    
    sumOddindex+=*ptr1;
    //printf("The sum of odd numbers is %d\n",sum);
}  
int main()
{
    int arr[10]={100,56,87,49,78,12,45,78,61,99},i=0,*ptr1;
    printf("The values of the array arranged in the ascending order is:\n");
    sortArray(arr);

    for ( i = 0; i < 10; i++)
    {
        if((i+1)%2==0)
        {   
          ptr1=&arr[i];
          sumEvenIndex(ptr1);  
        }
        else
        {
          ptr1=&arr[i];
          sumOddIndex(ptr1);
        }

        
    }
    printf("The sum of even indexed numbers in the given array is %d\n",sumEvenindex);
    printf("The sum of odd indexed numbers in the given array is %d\n",sumOddindex);
}