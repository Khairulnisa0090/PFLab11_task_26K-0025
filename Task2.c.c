//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//task#2: Product Management using Structure

#include <stdio.h>

struct Product
{
    int productID;
    char name[50];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p)
{
    float discount;
    float finalPrice;

    discount = p.price * 5 / 100;

    finalPrice = p.price - discount;

    printf("\n--- Product Details ---\n");

    printf("Product ID: %d\n", p.productID);
    printf("Product Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Available Stock: %d\n", p.stock);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}

int main()
{
    struct Product p1 =
    {
        101,
        "Laptop",
        "Electronics",
        100000,
        10
    };

    displayProductDetails(p1);

    return 0;
}

