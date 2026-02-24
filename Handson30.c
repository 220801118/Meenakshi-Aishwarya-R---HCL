#include <stdio.h>

struct Product {
    float price;
    float discount; 
};

float calculateDiscountedPrice(struct Product p) {
    float discountedPrice=p.price-(p.price*p.discount/100.0);
    return discountedPrice;
}

void updatePrice(struct Product *p) {
    p->price=p->price-(p->price*p->discount/100.0);
}

int main() {
    struct Product prod;

    printf("Enter price: ");
    scanf("%f", &prod.price);

    printf("Enter discount (in %%): ");
    scanf("%f", &prod.discount);

    float newPrice=calculateDiscountedPrice(prod);
    printf("\nDiscounted price (call by value) = %.2f\n", newPrice);

    printf("Original price after call by value = %.2f\n", prod.price);

    updatePrice(&prod);

    printf("\nPrice after update (call by address) = %.2f\n", prod.price);

    return 0;
}