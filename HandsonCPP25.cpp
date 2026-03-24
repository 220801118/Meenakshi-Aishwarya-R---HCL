#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    
    Counter& operator++() {
        ++value;      
        return *this;  
    }

  
    Counter operator++(int) {
        Counter temp = *this; 
        value++;              
        return temp;         
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(5);

    int x = (c++).getValue();
    int y = (++c).getValue(); 

    cout << "x (c++): " << x << endl;
    cout << "y (++c): " << y << endl;
    cout << "Final c value: " << c.getValue() << endl;

    return 0;
}