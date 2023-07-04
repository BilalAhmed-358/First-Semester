#include <stdio.h>
struct location
{
    int h_no;
    char street[50];
    char area[50];
    char city[50];
    char country[50];
};
struct employ
{
    char name[50];
    int id;
    float salary;
    struct location address;
    int age;
    char designation[50];
} array[10];

int main()
{   
    printf("\nEnter the employees data: ");
    int n = 10,i;
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the name of the employ %d: ",i+1);
        scanf(" %s", &array[i].name);
        fflush(stdin);
        printf("\nEnter the ID of the employ %d: ",i+1);
        scanf(" %d", &array[i].id);

        printf("\nEnter the house number of the employ %d: ",i+1);
        scanf(" %d", &array[i].address.h_no); 

        printf("\nEnter the street of the employ %d: ",i+1);
        scanf(" %s", &array[i].address.street);

        printf("\nEnter the area of the employ %d: ",i+1);
        scanf(" %s", &array[i].address.area);

        printf("\nEnter the house number of the employ %d: ",i+1);
        scanf(" %s", &array[i].address.country);

        printf("\nEnter the designation of the employ %d: ",i+1);
        scanf(" %s", &array[i].designation);

        printf("\nEnter the age of the employ %d: ",i+1);
        scanf(" %d", &array[i].age);
        
    }

    return 0;
}