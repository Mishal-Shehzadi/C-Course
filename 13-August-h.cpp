#include <iostream>
using namespace std;

// maximum
int maximum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

// minimum
int minimum(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1;
    cout << "Enter number 01: ";
    cin >> num1;

    int num2;
    cout << "Enter number 02: ";
    cin >> num2;

    int num3;
    cout << "Enter number 03: ";
    cin >> num3;

    cout << "Largest Number in " << num1 << ", " << num2 << " and " << num3 << " is " << maximum(num1, num2, num3) << endl;
    cout << "Smalledt Number in " << num1 << ", " << num2 << " and " << num3 << " is " << minimum(num1, num2, num3) << endl;
    return 0;
}