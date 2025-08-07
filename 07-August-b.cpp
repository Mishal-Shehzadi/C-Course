#include <iostream>
#include <climits>
using namespace std;

struct student
{
    char name[50];
    int rollnumber;
    float marks;
} student[3];

int main()
{   
      //task to print student marks and show who is the topper

    for (int i =1; i <=3; i++)
    {

        cout << "Roll Number: " << i;
        student [i].rollnumber=i;

        cout << "\nEnter student name: ";
        cin >> student[i].name;

        cout << "Enter student total marks out of 500: ";
        cin >> student[i].marks;
    }

    for (int i = 1; i <= 3; i++)
    {
        cout << "\nRoll number: " << i;
        cout << "\tName of student: " << student[i].name;
        cout << "\tMarks: " << student[i].marks;
    }

    int topper = 0;

    for (int i = 1; i <= 3; i++)
    {
        if (student[i].marks > student[topper].marks)
        {
            topper = i ;
        }
    }

    cout << "\nTopper Information: ";
    cout << "\nName: " << student[topper].name;
    cout << "\nRollno. " << student[topper].rollnumber;
    cout << "\nMarks: " << student[topper].marks;
    return 0;
}