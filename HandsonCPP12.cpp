#include <iostream>
using namespace std;

struct LineItem {
    int id;
    int qty;
};

class Order {
private:
    LineItem items[10];  
    int count;

public:
    Order() {
        count=0;
    }
    void addLineItem(int id, int qty) {
        if (count<10) {
            items[count].id=id;
            items[count].qty=qty;
            count++;
        } else {
            cout << "Order is full!\n";
        }
    }
    int totalItems() {
        int total=0;
        for (int i=0; i<count; i++) {
            total+=items[i].qty;
        }
        return total;
    }
    void printSummary() {
        cout << "\n--- Order Summary ---\n";
        for (int i=0; i<count; i++) {
            cout << "Item ID: " << items[i].id
                 << ", Quantity: " << items[i].qty << endl;
        }
        cout << "Total items (sum of quantities): " << totalItems() << endl;
    }
};

int main() {
    Order order;
    order.addLineItem(101, 2);
    order.addLineItem(102, 3);
    order.addLineItem(103, 1);
    order.addLineItem(104, 4);
    order.printSummary();

    return 0;
}