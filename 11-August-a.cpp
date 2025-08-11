#include <iostream>
using namespace std;

int main()
{
    string name[100];
    int i = 0;
    int marks[100];
    int rollnumber[100];
    int department[100];
    int scholarship[100];
    int choice;
    do
    {
        cout << "\n\n===== University Student Management System =====" << endl;
        cout << "\n1. Add Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Exit" << endl;

        cout << "\nChoose an option: ";
        cin >> choice;

        if (choice == 1)
        {
            if (i >= 100)
            {
                cout << "Max Student limit Reached!\n";
            }

            cout << "Enter Student Name: ";
            cin >> name[i];

            cout << "Enter Roll Number: ";
            cin >> rollnumber[i];

            cout << "Enter marks (out of 500): ";
            cin >> marks[i];

            cout << "Is Scholarship Holder? (1 for yes / 0 for No): ";
            cin >> scholarship[i];

            cout << "\nChoose Department: " << endl;
            cout << "1. Computer Science\n2. Information Technology\n3. Software Engineering\n4. Artificial Intelligence" << endl;

            cout << "Enter Department Choice: ";
            cin >> department[i];

            cout << "\n\nStudent Added Successfully!" << endl;
            i++;
        }
        else if (choice == 2)
        {
            if (i == 0)
            {
                cout << "No Student records found\n";
            }
            else
            {
                cout << "\n----- Student Records -----" << endl;
                for (int j = 0; j < i; j++)
                {
                    cout << "\nRoll no. " << rollnumber[j];
                    cout << " | Name: " << name[j];
                    cout << " | Marks: " << marks[j];
                    cout << " | Scholarship: " << scholarship[j];
                    cout << " | Department: " << department[j] << "\n";
                    if (scholarship[j] == 1)
                    {
                        cout << "Remarks: Excellent - Special Congratulations!\n";
                    }
                    else
                    {
                        cout << "Remarks: Good - Keep Improving\n";
                    }
                }
            }
        }
        else if (choice == 3)
        {
            if (i == 0)
            {
                cout << "No Student Record." << endl;
            }
            else
            {
                int searchroll;
                cout << "Enter roll number to search: ";
                cin >> searchroll;
                bool found = false;

                for (int j = 0; j < i; j++)
                {
                    if (rollnumber[j] == searchroll)
                    {
                        cout << "Roll No: " << rollnumber[j]
                             << " | Name: " << name[j]
                             << " | Marks: " << marks[j]
                             << " | Scholarship: " << (scholarship[j] ? "Yes" : "No")
                             << " | Department: " << department[j]
                             << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "Student not found.";
                }
            }
        }
        else if (choice != 4)
        {
            cout << "Invalid choice";
        }

    } while (choice != 4);

    cout << "Exiting Program...Goodbye!\n";

    return 0;
}
