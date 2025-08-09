#include <iostream>
using namespace std;

int main()
{
    // Pointers
    // Task: Swap Two Numbers Using Pointers
    
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter another number: ";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // before swapping
    cout << "Before Swapping: " << endl;
    cout << "Number 01: " << num1 << endl;
    cout << "Number 02: " << num2 << endl;

    // Swap without third variable using pointers

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    // After Swapping
    cout << "After Swapping: " << endl;
    cout << "Number 01: " << num1 << endl;
    cout << "Number 02: " << num2 << endl;

    return 0;
}