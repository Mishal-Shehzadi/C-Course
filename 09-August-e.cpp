#include <iostream>
using namespace std;

int main()
{
    // Task: Add Two Numbers Using Pointers

    // Ask the user to enter two integers.
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter another number: ";
    cin >> num2;

    // Store their addresses in two pointers.
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Use only pointers (not variable names) to add them.
    int sum = *ptr1 + *ptr2;

    // Print the sum.
    cout << "Sum of " << num1 << " and " << num2 << ": " << sum << endl;
    return 0;
}