
// multiple paramters
#include <iostream>
using namespace std;

// sum
int sum(int a, int b, int c)
{
    int ans = a + b + c;

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

    int num3;
    cout << "Enter number 03: ";
    cin >> num3;

    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << sum(num1, num2, num3) << endl;

    return 0;
}