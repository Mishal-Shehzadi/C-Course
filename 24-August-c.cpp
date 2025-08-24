#include <iostream>
using namespace std;

void change(int &a, int &b)
{
    int c;
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

    cout << "After Swapping: ";
    change(num1, num2);
    cout << num1 << " and " << num2;

    return 0;
}