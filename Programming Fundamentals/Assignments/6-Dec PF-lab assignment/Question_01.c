#include <stdio.h>
void printany(int choice, void *ptr)
{
    if (choice == 1)
    {
        printf("The interger you entered is %d", *(int *)ptr);
    }
    else if (choice == 2)
    {
        printf("The character you entered is %c", *(char *)ptr);
    }
    else if (choice == 3)
    {
        printf("The floating point value  you entered is %.2f", *(float *)ptr);
    }
}
int main()
{
    int num, choice;
    char cha;
    float point;
    void *ptr;
    printf("Enter 1 for int\n2 for character\n3 for float\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the integer\n");
        scanf(" %d", &num);
        ptr = &num;
        printany(choice, ptr);
        break;
    case 2:
        printf("Enter the character\n");
        scanf(" %c", &cha);
        ptr = &cha;
        printany(choice, ptr);
        break;
    case 3:
        printf("Enter the floating point value\n");
        scanf(" %f", &point);
        ptr = &point;
        printany(choice, ptr);
        break;
    default:
        printf("Please choose any of the given values\n");
    }
}
