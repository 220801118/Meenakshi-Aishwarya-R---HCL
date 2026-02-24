#include <stdio.h>

struct Customer {
    int id;
    char name[30];
};

struct Item {
    int itemId;
    char itemName[30];
    float price;
    int quantity;
};

struct Order {
    int orderId;
    struct Customer cust;
    struct Item item;
};

void printOrder(struct Order o) {
    printf("\n----- Order Details -----\n");
    printf("Order ID   : %d\n", o.orderId);

    printf("\nCustomer Details:\n");
    printf("Customer ID: %d\n", o.cust.id);
    printf("Name       : %s\n", o.cust.name);

    printf("\nItem Details:\n");
    printf("Item ID    : %d\n", o.item.itemId);
    printf("Item Name  : %s\n", o.item.itemName);
    printf("Price      : %.2f\n", o.item.price);
    printf("Quantity   : %d\n", o.item.quantity);

    printf("\nTotal Cost : %.2f\n", o.item.price*o.item.quantity);
}

int main() {
    struct Order order1;

    printf("Enter Order ID: ");
    scanf("%d", &order1.orderId);

    printf("Enter Customer ID and Name: ");
    scanf("%d %s", &order1.cust.id, order1.cust.name);

    printf("Enter Item ID, Item Name, Price, Quantity: ");
    scanf("%d %s %f %d",
          &order1.item.itemId,
          order1.item.itemName,
          &order1.item.price,
          &order1.item.quantity);

    printOrder(order1);

    return 0;
}