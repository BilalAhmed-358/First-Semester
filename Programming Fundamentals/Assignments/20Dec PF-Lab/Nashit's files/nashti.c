#include <stdio.h>
struct employ
{
    char name[50];
    int id;
    float salary;
    struct loc address[50];
    int age;
    char designation[50];
}array[10];
struct loc
{
    int h_no; char street[50];
    char area[50];
    char city[50];
    char country[50];
}a;
int main()
{
    printf("\nEnter the employ data: ");
    int n=10;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the employ: ");
        scanf("%s", &array[i].name);

        printf("\nEnter the ID of the employ: ");
        scanf("%d", &array[i].id);

        printf("\nEnter the house number of the employ: ");
        scanf("%d", &array[i].address->h_no);

        printf("\nEnter the street of the employ: ");
        scanf(" %s", &array[i].address->street);

        printf("\nEnter the area of the employ: ");
        scanf(" %s", &array[i].address->area);

        // printf("\nEnter the house number of the employ: ");
        // scanf(" %s", &array[i].a.country);

        printf("\nEnter the designation of the employ: ");
        scanf(" %s", array[i].designation);

        printf("\nEnter the age of the employ: ");
        scanf("%d", array[i].age);
    }

    return 0;
}