#include <iostream>
#include <string>
using namespace std;

struct Customer {
    int customerId;
    string name;
    string phone;
};

struct Order {
    int orderId;
    string productName;
    float price;
    Customer cust;
};

int main() {
    Order o;
    cout << "Enter Customer ID: ";
    cin >> o.cust.customerId;
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, o.cust.name);
    cout << "Enter Customer Phone: ";
    getline(cin, o.cust.phone);
    cout << "Enter Order ID: ";
    cin >> o.orderId;
    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin, o.productName);
    cout << "Enter Price: ";
    cin >> o.price;

    cout << "\n===== Order Details =====\n";
    cout << "Order ID      : " << o.orderId << endl;
    cout << "Product Name  : " << o.productName << endl;
    cout << "Price         : " << o.price << endl;

    cout << "\n----- Customer Details -----\n";
    cout << "Customer ID   : " << o.cust.customerId << endl;
    cout << "Name          : " << o.cust.name << endl;
    cout << "Phone         : " << o.cust.phone << endl;

    return 0;
}