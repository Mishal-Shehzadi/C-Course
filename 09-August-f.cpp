#include <iostream>
using namespace std;

int main()
{
    // Print All Elements of an Array Using Pointers
    // Ask the user how many numbers they want to enter.
    int num;
    cout << "How many numbers? ";
    cin >> num;

    // Store the numbers in an array.
    int arr[num];
    int *ptr = arr;

    // Use a pointer and pointer arithmetic (ptr + i) to print all the values.
    // Input values
    cout << "Enter " << num << " numbers:\n";
    for (int i = 0; i < num; i++)
    {
        cin >> *(ptr + i); // store value using pointer arithmetic
    }

    // Output values
    cout << "\nYou entered:\n";
    for (int i = 0; i < num; i++)
    {
        cout << *(ptr + i) << endl; // print using pointer arithmetic
    }

    return 0;
}