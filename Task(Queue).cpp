#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Submission {
    int studentID;
    string subject;
};

int main() {

    queue<Submission> examQueue;
    int choice;

    do {
        cout << "\n=== Online Exam Submission System ===\n";
        cout << "1. Submit Exam\n";
        cout << "2. Process Next Submission\n";
        cout << "3. Show Pending Submissions\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Submission newSub;
            cout << "Enter Student ID: ";
            cin >> newSub.studentID;
            cout << "Enter Subject: ";
            cin >> newSub.subject;

            examQueue.push(newSub);
            cout << "Submission added to queue.\n";
            break;
        }

        case 2:
            if (!examQueue.empty()) {
                Submission current = examQueue.front();
                cout << "Processing Student ID: "
                     << current.studentID
                     << " | Subject: "
                     << current.subject << endl;

                examQueue.pop();
            } else {
                cout << "No submissions to process.\n";
            }
            break;

        case 3: {
            if (examQueue.empty()) {
                cout << "No pending submissions.\n";
            } else {
                queue<Submission> temp = examQueue;
                cout << "\nPending Submissions:\n";
                while (!temp.empty()) {
                    cout << "Student ID: "
                         << temp.front().studentID
                         << " | Subject: "
                         << temp.front().subject << endl;
                    temp.pop();
                }
            }
            break;
        }

        case 4:
            cout << "System shutting down...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
