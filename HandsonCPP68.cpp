#include <iostream>
#include <stack>
using namespace std;

class Editor {
    stack<string> undoStack, redoStack;
    string text = "";

public:
    void type(char c) {
        undoStack.push(text);
        text += c;
        while (!redoStack.empty()) redoStack.pop();
    }

    void backspace() {
        if (!text.empty()) {
            undoStack.push(text);
            text.pop_back();
            while (!redoStack.empty()) redoStack.pop();
        }
    }

    void undo() {
        if (!undoStack.empty()) {
            redoStack.push(text);
            text = undoStack.top();
            undoStack.pop();
        }
    }

    void redo() {
        if (!redoStack.empty()) {
            undoStack.push(text);
            text = redoStack.top();
            redoStack.pop();
        }
    }

    void print() {
        cout << text << endl;
    }
};

int main() {
    Editor e;

    e.type('a');
    e.type('b');
    e.type('c');
    e.print();

    e.undo();
    e.print();

    e.redo();
    e.print(); 
}