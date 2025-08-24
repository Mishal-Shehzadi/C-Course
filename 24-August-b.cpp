#include <iostream>
using namespace std;

//cube of a number

int cube(int a)
{
    int ans = 1;
    ans = a * a * a;
    return ans;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube of " << number << " is " << cube(number);

    return 0;
}