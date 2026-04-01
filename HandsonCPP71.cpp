#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> in, out;

public:
    void push(int x) {
        in.push(x);
    }

    void pop() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        if (!out.empty()) out.pop();
    }

    int front() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
};