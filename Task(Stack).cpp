#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct ChatContext {
    int id;
    string userMessage;
    string botResponse;
};

int main() {

    stack<ChatContext> memory;
    string input;
    int contextID = 1;

    cout << "=== Enterprise AI Support System ===\n";
    cout << "Commands: undo | history | exit\n\n";

    while (true) {
        cout << "\nUser: ";
        getline(cin, input);

        if (input == "exit")
            break;

        if (input == "undo") {
            if (!memory.empty()) {
                cout << "Rolling back Context ID: "
                     << memory.top().id << endl;
                memory.pop();
            } else {
                cout << "No context to rollback.\n";
            }
            continue;
        }

        if (input == "history") {
            stack<ChatContext> temp = memory;
            cout << "\n--- Conversation History (Latest First) ---\n";
            while (!temp.empty()) {
                cout << "ID: " << temp.top().id << endl;
                cout << "User: " << temp.top().userMessage << endl;
                cout << "Bot: " << temp.top().botResponse << endl;
                cout << "-------------------------\n";
                temp.pop();
            }
            continue;
        }

        string botReply = "AI processed: " + input;

        ChatContext newContext;
        newContext.id = contextID++;
        newContext.userMessage = input;
        newContext.botResponse = botReply;

        memory.push(newContext);

        cout << "Bot: " << botReply << endl;
    }

    cout << "\nSystem shutting down.\n";
    return 0;
}
