#include <stdio.h>

enum Status {
    PENDING,
    SHIPPED,
    DELIVERED
};

int main() {
    enum Status orderStatus=PENDING; 

    int choice;

    printf("Current Order Status: PENDING\n");

    printf("\nUpdate Order Status:\n");
    printf("0. PENDING\n");
    printf("1. SHIPPED\n");
    printf("2. DELIVERED\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice==0)
        orderStatus=PENDING;
    else if (choice==1)
        orderStatus=SHIPPED;
    else if (choice==2)
        orderStatus=DELIVERED;
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("\nUpdated Order Status: ");
    if (orderStatus==PENDING)
        printf("PENDING\n");
    else if (orderStatus==SHIPPED)
        printf("SHIPPED\n");
    else if (orderStatus==DELIVERED)
        printf("DELIVERED\n");

    return 0;
}