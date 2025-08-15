#include <iostream>
using namespace std;

int main()
{
    // Topic: If-Else
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is Even." << endl;
    }
    else
    {
        cout << num << " is Odd." << endl;
    }
    return 0;
}