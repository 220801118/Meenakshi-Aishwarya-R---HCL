#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *data;
    int size;
    int capacity;

public:
    DynamicArray(int cap=2) {
        capacity=cap;
        size=0;
        data=new int[capacity];
    }
    void push_back(int value) {
        if (size==capacity) {
            int newCapacity=capacity*2;
            int *newData=new int[newCapacity];
            for (int i=0; i<size; i++) {
                newData[i]=data[i];
            }
            delete[] data;
            data=newData;
            capacity=newCapacity;
            cout << "Resized array to capacity " << capacity << endl;
        }

        data[size]=value;
        size++;
    }
    void display() const {
        cout << "Array elements: ";
        for (int i=0; i<size; i++) {
            cout << data[i] << " ";
        }
        cout << "\nSize = " << size << ", Capacity = " << capacity << endl;
    }
    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.display();
    arr.push_back(30);
    arr.display();
    arr.push_back(40);
    arr.push_back(50);
    arr.display();

    return 0;
}