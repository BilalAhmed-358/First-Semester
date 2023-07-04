#include<stdio.h>
void inverse_triangle(int n, int o ) 
{ 
    if (n < 0) 
        return; 
    int i; 
    for (i = 0; i < o; i++)  
        printf (" "); 
    for (i = 0; i < n; i++)
        printf("* "); 
    printf("\n");
  
     
    inverse_triangle(n - 1, o + 1);  
} 
  
int main() 
{ 
    int n = 5; 
  
    inverse_triangle (n, 0);  
    return 0; 
} 
