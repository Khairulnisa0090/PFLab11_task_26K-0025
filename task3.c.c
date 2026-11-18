//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//task#3:


#include <stdio.h>

struct Item
{
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};

int main()
{
    struct Item items[5];

    int searchID;
    int found = 0;

    float totalValue = 0;

    // Input 5 items
    int i;
    for( i = 0; i < 5; i++)
    {
        printf("\nEnter Details of Item %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &items[i].ID);

        printf("Enter Item Name: ");
        scanf(" %49[^\n]", items[i].Name);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &items[i].UnitPrice);

        totalValue = totalValue +
        (items[i].Quantity * items[i].UnitPrice);
    }

    // Display total inventory value
    printf("\nTotal Inventory Value = %.2f\n", totalValue);

    // Search item
    printf("\nEnter Item ID to Search: ");
    scanf("%d", &searchID);

    for( i = 0; i < 5; i++)
    {
        if(items[i].ID == searchID)
        {
            printf("\nItem Found!\n");

            printf("Item ID: %d\n", items[i].ID);
            printf("Item Name: %s\n", items[i].Name);
            printf("Quantity: %d\n", items[i].Quantity);
            printf("Unit Price: %.2f\n", items[i].UnitPrice);

            printf("Total Item Value: %.2f\n",
            items[i].Quantity * items[i].UnitPrice);

            found = 1;

            break;
        }
    }

    if(found == 0)
    {
        printf("\nItem Not Found!\n");
    }

    return 0;
}
