#include <iostream>
using namespace std;

// sum

int sum(int a, int b)
{
    int ans = 0;
    ans = a + b;
    return ans;
}
int main()
{
    int num1;
    cout << "Enter first number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);

    return 0;
}