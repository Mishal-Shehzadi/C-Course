#include <iostream>
using namespace std;

// add
int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}

// subtract
int subtract(int a, int b)
{
    int ans;
    if (a > b)
    {
        ans = a - b;
    }
    else
    {
        ans = b - a;
    }
    return ans;
}

// multiplication
int mul(int a, int b)
{
    int ans = a * b;
    return ans;
}

// divide
float divide(int a, int b)
{
    float ans;
    if (a > b)
    {
        ans = (float)a / b;
    }
    else
    {
        ans = (float)b / a;
    }
    return ans;
}

int main()
{
    int num1;
    cout << "Enter number 01: ";
    cin >> num1;

    int num2;
    cout << "Enter number 02: ";
    cin >> num2;

    char op;
    cout << "Select an operator(+, -, *, /): ";
    cin >> op;

    if (op == '+')
    {
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
    }
    else if (op == '-')
    {
        if (num1 > num2)
        {
            cout << "The answer of " << num1 << "-" << num2 << " is " << subtract(num1, num2) << endl;
        }
        else
        {
            cout << "The answer of " << num2 << "-" << num1 << " is " << subtract(num1, num2) << endl;
        }
    }
    else if (op == '*')
    {
        cout << "The product of " << num1 << " and " << num2 << " is " << mul(num1, num2) << endl;
    }
    else if (op == '/')
    {
        cout << "The answer after division is " << divide(num1, num2) << endl;
    }
    else
    {
        cout << "Choose operators from the given list only.";
    }

    return 0;
}