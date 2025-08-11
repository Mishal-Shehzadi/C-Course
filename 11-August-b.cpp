#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string name;
    cout << "Enter Student Name: ";
    getline(cin, name);

    int rollnumber;
    cout << "Enter Roll Number: ";
    cin >> rollnumber;

    int total = 0;
    int highest = INT_MIN;
    int lowest = INT_MAX;

    int sub[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter marks for subject " << i + 1<<": ";
        cin >> sub[i];
        total = sub[i] + total;

        if (sub[i] > highest)
        {
            highest = sub[i];
        }
        if (sub[i] < lowest)
        {
            lowest = sub[i];
        }
    }

    int average = total / 3;

    cout << "\n==== Menu ====" << endl;

    int choice;
    do
    {
        
        cout << "\n1. Show Student Info" << endl;
        cout << "2. Show Result" << endl;
        cout << "3. Exit" << endl;

        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
           
            cout << "\nName: " << name << endl;
            cout << "Roll Number: "<<rollnumber<< endl;
        }

        if (choice == 2)
        {
            cout << "\nMarks: ";
            for (int i = 0; i < 3; i++)
            {
                cout << sub[i] <<" ";
            }
            cout << "\nTotal Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;
            cout << "Highest Marks: " << highest << endl;
            cout << "Lowest Marks: " << lowest << endl;
        }

        
    } while (choice != 3);

    cout << "\nExiting  Program" << endl;

    return 0;
}