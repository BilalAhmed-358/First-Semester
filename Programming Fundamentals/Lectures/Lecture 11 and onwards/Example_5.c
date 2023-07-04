#include <stdio.h>
int main()
{
     int i;
     int j;
     printf("Enter the two numbers : ");
     scanf("%d",&i);
     scanf("%d",&j);
     switch (i < j)
     {
     	case 1:
     		printf("UP");
     		break;
     		
     }
     switch (i > j)
     {
     	case 1:
     		printf("DOWN");
     		break;
     }
     switch (i == j)
     {
     	case 1:
     		printf("EQUAL");
     		break;
     	
     }
    
     }

