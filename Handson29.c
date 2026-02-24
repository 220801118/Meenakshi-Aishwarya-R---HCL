#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    int id;
    char name[30];
    float price;
};

void displayItems(struct Item *items, int n) {
    if (n==0) {
        printf("No items to display.\n");
        return;
    }

    printf("\nID\tName\tPrice\n");
    for (int i=0; i<n; i++) {
        printf("%d\t%s\t%.2f\n", items[i].id, items[i].name, items[i].price);
    }
}

struct Item* addItem(struct Item *items, int *n) {
    struct Item *temp=realloc(items, (*n+1) * sizeof(struct Item));
    if (temp==NULL) {
        printf("Memory reallocation failed!\n");
        return items; 
    }

    items=temp;

    printf("Enter ID, Name, Price for new item: ");
    scanf("%d %s %f", &items[*n].id, items[*n].name, &items[*n].price);

    (*n)++;
    printf("Item added successfully.\n");
    return items;
}

struct Item* deleteItem(struct Item *items, int *n, int pos) {
    if (*n==0) {
        printf("No items to delete.\n");
        return items;
    }

    if (pos<1 || pos>*n) {
        printf("Invalid position!\n");
        return items;
    }

    for (int i=pos-1; i<*n-1; i++) {
        items[i]=items[i+1];
    }
    (*n)--;

    if (*n==0) {
        free(items);
        printf("Item deleted. List is now empty.\n");
        return NULL;
    }

    struct Item *temp=realloc(items, (*n) * sizeof(struct Item));
    if (temp==NULL) {
        printf("Memory reallocation failed after delete!\n");
        return items;
    }

    printf("Item deleted successfully.\n");
    return temp;
}

int main() {
    struct Item *items = NULL;
    int n, choice;

    printf("Enter initial number of items: ");
    scanf("%d", &n);

    if (n>0) {
        items=(struct Item *)malloc(n * sizeof(struct Item));
        if (items==NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        for (int i=0; i<n; i++) {
            printf("Enter ID, Name, Price for item %d: ", i + 1);
            scanf("%d %s %f", &items[i].id, items[i].name, &items[i].price);
        }
    }

    do {
        printf("\n1. Add Item\n");
        printf("2. Delete Item\n");
        printf("3. Display Items\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice==1) {
            items=addItem(items, &n);
        } 
        else if (choice==2) {
            int pos;
            printf("Enter item number to delete (1 to %d): ", n);
            scanf("%d", &pos);
            items=deleteItem(items, &n, pos);
        } 
        else if (choice==3) {
            displayItems(items, n);
        } 
        else if (choice==4) {
            printf("Exiting...\n");
        } 
        else {
            printf("Invalid choice!\n");
        }

    } while (choice!=4);

    free(items); 
    return 0;
}