
// Topic: Functions
#include <iostream>
using namespace std;

// Function for sum
int sum(int a, int b) // function declare
{                     // int a and b are parameters
    int ans = a + b;  // function define
    return ans;       
}

// Function for multiplication
int mul(int a, int b)
{
    int ans = a * b;
    return ans;
}

void fun() // not expecting any answer of int or bool or any other type
{
    cout << "Hello Mishal\n";
}

int main()
{
    int num1;
    cout << "Enter Number 01: ";
    cin >> num1;

    int num2;
    cout << "Enter Number 02: ";
    cin >> num2;

    // Function Call
    // addition
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl; // ( ) is called arguement

    // Multiplication
    cout << "The product of " << num1 << " and " << num2 << " is " << mul(num1, num2) << endl;

    // void
    fun();

    return 0;
};