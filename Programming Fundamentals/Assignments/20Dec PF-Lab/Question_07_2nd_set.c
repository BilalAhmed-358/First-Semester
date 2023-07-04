#include <stdio.h>
int main()
{
    void *ptr_void;
    int int_value;
    char char_value;
    float float_value;
    printf("\nEnter the value of the integer\n");
    scanf("%d", &int_value);
    printf("Enter the value of the character\n");
    scanf(" %c", &char_value);
    printf("Enter the value of the float\n");
    scanf("%f", &float_value);

    ptr_void = &int_value;
    printf("\nInterger value = %d\n", *(int *)ptr_void);
    printf("Address of integer Variable = %p\n", (ptr_void));

    ptr_void = &char_value;
    printf("\nCharacter value= %c\n", *(char *)ptr_void);
    printf("Address of char Variable = %p\n", (ptr_void));

    ptr_void = &float_value;
    printf("\nFloat value= %.2f\n", *(float *)ptr_void);
    printf("Address float Variable = %p\n", (ptr_void));
}