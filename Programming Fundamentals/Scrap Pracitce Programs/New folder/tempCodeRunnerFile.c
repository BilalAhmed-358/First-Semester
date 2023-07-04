#include <stdio.h>
#include <string.h>
struct Inventory
{
    char name[100];
    float price;
    int quantity;
    char type[20];
} items[2];
void get_info(struct Inventory items[]);
int i, j;
int main()
{
    printf("Enter the items you want to buy\n");
    for (i = 0; i < 2; i++)
    {
        printf("Enter the name of item %d\n", i + 1);
        fflush(stdin);
        gets(items->name);
        printf("Enter the price of item %d\n", i + 1);
        scanf("%f", &items->price);
        printf("Enter the quantity of item %d\n", i + 1);
        scanf("%d", &items->quantity);
        if (items->price < 20)
        {
            strcpy(items->type, "cheap");
        }
        else if (items->price > 20 && items->price < 100)
        {
            strcpy(items->type, "moderate");
        }
        else if (items->price > 100)
        {
            strcpy(items->type, "expensive");
        }
        get_info(items);
    }
    void get_info(struct Inventory items[]);
    {
        printf("this\n");
    }
}