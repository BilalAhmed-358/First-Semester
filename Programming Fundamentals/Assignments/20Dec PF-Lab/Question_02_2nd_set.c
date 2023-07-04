#include<stdio.h>
#include<stdlib.h>
int main()
{
     int num,choice;
     char charac;
     float point;
    printf("Enter:\n1 for int\n2 for character\n3 for floating point\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {   int *ptr_int=&num;
        ptr_int=(int*)malloc(num*sizeof(int));
        printf("Enter the value of the integer\n");
        scanf("%d",&*ptr_int);
        printf("The value of the integer is %d.",*ptr_int);
        break;
    }
    case 2:
    {
        char *ptr_charac=&charac;
        ptr_charac=(char*)malloc(charac*sizeof(char));
        printf("Enter the character\n");
        fflush(stdin);
        scanf(" %c",&*ptr_charac);
        printf("The value of the character is %c.",*ptr_charac);
        break;
    }
    case 3:
    {
        float *ptr_point=&point;
        ptr_point=(float*)malloc(point*sizeof(float));
        printf("Enter the floating point variable\n");
        fflush(stdin);
        scanf(" %f",&*ptr_point);
        printf("The value of the floating point variable is %.3f.",*ptr_point);
        break;
    }
    default:
        break;
    }
}