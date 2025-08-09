#include <iostream>
using namespace std;

int main()
{
    // Task: Double a Number Using Pointers

    // Ask the user to enter a number.
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    // Store its address in a pointer.
    int *ptr=&num;

    // Use the pointer to double the number’s value
    *ptr=*ptr*2;

    // Print the new value.
    cout<<"After doubling: "<<num;
    
    return 0;
}