#include <iostream>
using namespace std;

// swap two numbers without using third variable
void swap(int &a, int &b)
{
    a = a + b; // a=10; b=5;  a=15;  b=15-5=10;  a=15-10=5
    b = a - b;
    a = a - b;
    return;
}

int main()
{
    int num1;
    cout << "Enter first number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Numbers before swapping: " << num1 << " and " << num2 << endl;

    cout << "After Swapping: ";
    swap(num1, num2);
    cout << num1 << " and " << num2;

    return 0;
}