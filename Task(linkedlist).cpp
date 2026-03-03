#include <iostream>
#include <string>
using namespace std;

struct Post {
    int postID;
    string content;
    Post* next;
};

void addPost(Post*& head, int id, string text) {
    Post* newPost = new Post{id, text, nullptr};

    if (!head) {
        head = newPost;
        return;
    }

    Post* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newPost;
}

void displayFeed(Post* head) {
    if (!head) {
        cout << "Feed is empty.\n";
        return;
    }

    while (head) {
        cout << "Post ID: " << head->postID
             << " | Content: " << head->content << endl;
        head = head->next;
    }
}

Post* findMiddle(Post* head) {
    if (!head) return nullptr;

    Post* slow = head;
    Post* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    Post* feed = nullptr;
    int choice;

    do {
        cout << "\n=== Social Media Feed Analyzer ===\n";
        cout << "1. Add Post\n";
        cout << "2. Display Feed\n";
        cout << "3. Find Middle Post\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            int id;
            string text;

            cout << "Enter Post ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Content: ";
            getline(cin, text);

            addPost(feed, id, text);
            cout << "Post added successfully.\n";
        }

        else if (choice == 2) {
            displayFeed(feed);
        }

        else if (choice == 3) {
            Post* middle = findMiddle(feed);

            if (middle) {
                cout << "\n--- Middle Post (Feed Split Point) ---\n";
                cout << "Post ID: " << middle->postID << endl;
                cout << "Content: " << middle->content << endl;
            } else {
                cout << "Feed is empty.\n";
            }
        }

    } while (choice != 4);

    cout << "System shutting down.\n";
    return 0;
}
