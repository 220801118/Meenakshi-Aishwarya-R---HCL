#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string task;
    cout<<"1. Add Task\n2. View Tasks\nEnter choice: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter new task: ";
        getline(cin, task);
        ofstream fout("todo.txt");
        if(fout.is_open())
        {
            fout<<task<<endl;
            fout.close();
            cout<<"Task added successfully!\n";
        }
        else
        {
            cout<<"Error opening file for writing!\n";
        }
    }
    else if(choice==2)
    {
        ifstream fin("todo.txt");
        if(!fin.is_open())
        {
            cout<<"File not found!\n";
        }
        else
        {
            cout<<"\n--- Your Tasks ---\n";
            while (getline(fin, task))
            {
                cout<< "- " << task << endl;
            }
            fin.close();
        }
    }
    return 0;
}
