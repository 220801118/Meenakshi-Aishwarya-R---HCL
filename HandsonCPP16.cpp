#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string isbn;
    string title;
    string author;

public:
    Book() {
        isbn="";
        title="";
        author="";
    }
    void setIsbn(const string& i) {
        isbn=i;
    }

    void setTitle(const string& t) {
        title=t;
    }

    void setAuthor(const string& a) {
        author=a;
    }

    void updateTitle(const string& newTitle) {
        title=newTitle;
    }

    void print() const {
        cout << "ISBN  : " << isbn << endl;
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1;
    b1.setIsbn("978-0131103627");
    b1.setTitle("The C Programming Language");
    b1.setAuthor("Kernighan & Ritchie");

    cout << "--- Book Details (Before Update) ---\n";
    b1.print();

    b1.updateTitle("The C Programming Language (2nd Edition)");

    cout << "\n--- Book Details (After Update) ---\n";
    b1.print();

    Book b2;
    b2.setIsbn("978-0201633610");
    b2.setTitle("Design Patterns");
    b2.setAuthor("Gamma et al.");

    cout << "\n--- Second Book Details ---\n";
    b2.print();

    return 0;
}