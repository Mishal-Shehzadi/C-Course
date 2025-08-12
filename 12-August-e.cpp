
// pass by value and reference
#include <iostream>
using namespace std;

// swapping numbers
void swap(int &a, int &b) // we used & which means pass by reference so we will have swapped values
{                         // if & was not used, we would not have new swapped values and previous values
    int c;                // would be printed
    c = a;
    a = b;
    b = c;

    return;
}

int main()
{
    int num1;
    cout << "Enter number 01: ";
    cin >> num1;

    int num2;
    cout << "Enter number 02: ";
    cin >> num2;

    cout << "Numbers before swapping: " << num1 << " and " << num2 << endl;
    cout << "Numbers after swapping ";
    swap(num1, num2);
    cout << num1 << " and " << num2;

    return 0;
}