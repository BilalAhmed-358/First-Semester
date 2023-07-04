#include <stdio.h>

void printInvertedri8Triangle(int n)
{
    if (n == 1)
    {
        printf("* \n");
    }

    else if (n > 1)
    {
        int i;
        for (i = 0; i < n; i++)
            printf("*");
        printf("\n");
        printInvertedri8Triangle(n - 1);
    }
}

void printrightTriangle(int n)
{
    if (n == 1)
    {
        printf("*");
        printf("\n");
    }

    else if (n > 1)
    {

        int i;
        printrightTriangle(n - 1);
        printf("%d", n);
        for (i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
}

void main()
{

    printInvertedri8Triangle(4);
}
