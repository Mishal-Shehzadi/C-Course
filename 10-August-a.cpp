#include <iostream>
using namespace std;

struct
{
    char name[50];
    int rollnumber;
    float Math;
    float English;
    float Urdu;
    float total;
    float percentage;
} s[2];

int main()
{
    // Student Result System

    for (int i = 1; i <= 2; i++)
    {
        cout << "\n----- Student no. " << i << " -----\n"<<endl;

        cout << "Enter Student Name: ";
        cin >> s[i].name;

        cout << "Enter Roll no. ";
        cin >> s[i].rollnumber;

        cout << "Marks of Maths: ";
        cin >> s[i].Math;

        cout << "Marks of English: ";
        cin >> s[i].English;

        cout << "Marks of Urdu: ";
        cin >> s[i].Urdu;

        s[i].total = s[i].Urdu + s[i].English + s[i].Math;
        s[i].percentage = (s[i].total * 100) / 300;
    }

    cout << "\n----- Results -----"<<endl;
    for (int i = 1; i <= 2; i++)
    {
        cout <<"\n"<< s[i].name << " (" << s[i].rollnumber << ")"<<endl;
        cout << "Total: " << s[i].total << ", Percentage: " << s[i].percentage<<" %"<<endl;
        if (s[i].percentage >= 50)
        {
            cout << "Remarks: Great Result"<<endl;
        }
        else
        {
            cout << "Remarks: Need Improvement."<<endl;
        }
    }
    return 0;
}