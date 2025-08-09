#include <iostream>
using namespace std;

int main()
{
    // Task: Print Value and Address Using Pointers

    // Take an integer input from the user.
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    // Store its address in a pointer.
    int *ptr = &num;

    // Print the value and the address using the pointer.
    cout<<"Value: "<<num<<endl;
    cout<<"Address: "<<&num;
    
    return 0;
}