#include <iostream>
using namespace std;

int main()
{  //check if a is greater than b
    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    if (a > b)
    {
        cout << "Yes! " << a << " is greater than " << b;
    }
    else
    {
        cout << "No! " << a << " is not greater than " << b;
    }
    return 0;
}