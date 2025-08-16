#include <iostream>
using namespace std;

int main()
{
    // tables

    int num;
    cout << "Enter any number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    // or
    // table of 6
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i <= 10 * n; i = i + n)
    {
        cout << i << endl;
    }

    return 0;
}