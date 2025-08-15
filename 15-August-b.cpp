#include <iostream>
using namespace std;

int main()
{ //show pass or fail
    int marks;
    cout << "Enter you marks: ";
    cin >> marks;

    if (marks > 33)
    {
        cout << "Pass!";
    }
    else
    {
        cout << "Fail!";
    }
    return 0;
}