#include <stdio.h>
#include <string.h>
struct Inventory
{
    char name[100];
    float price;
    int quantity;
    char type[20];
};
int i, j;
void get_info(struct Inventory items[], int i)
{
    if (items[i].price < 20)
    {
        printf("The item is cheap\n");
    }
    else if (items[i].price > 20 && items[i].price < 100)
    {
        printf("The item is moderate\n");
    }
    else if (items[i].price > 100)
    {
        printf("The item is expensive\n");
    }
}
void bill(struct Inventory items[],int n)
{   printf("\t\tYou total bill is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("Item:%s\tPrice:%.3f\tQuantity:%d\tTotal Price:%.3f",items[i].name,items[i].price,items[i].quantity,items[i].price*items[i].quantity);
    }
    
}
int main()
{   int n;
    printf("How many items do you want to buy customer?\n");
    fflush(stdin);
    scanf("%d",&n);
    struct Inventory items[n];
    printf("Dear customer Enter the items you want to buy\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name of item %d\n", i + 1);
        fflush(stdin);
        gets(items[i].name);
        printf("Enter the price of item %d\n", i + 1);
        fflush(stdin);
        scanf("%f", &items[i].price);
        printf("Enter the quantity of item %d\n", i + 1);
        fflush(stdin);
        scanf("%d", &items[i].quantity);
        get_info(items,i);
    }
    bill(items,n);
}