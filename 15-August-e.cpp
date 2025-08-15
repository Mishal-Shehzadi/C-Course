#include <iostream>
using namespace std;

int main()
{ // show if the number is positive,negative or zero
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is Positive.";
    }
    else if (num == 0)
    {
        cout << "The number you gave is zero";
    }
    else
    {
        cout << num << " is negative";
    }
    return 0;
}