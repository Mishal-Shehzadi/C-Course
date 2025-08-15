#include <iostream>
using namespace std;

int main()
{ // days of week

    int n;
    cout << "Enter a number between 1 and 7: ";
    cin >> n;

    if (n == 1)
    {
        cout << "It is Monday!";
    }
    else if (n == 2)
    {
        cout << "It is Tuesday!";
    }
    else if (n == 3)
    {
        cout << "It is Wednesday!";
    }
    else if (n == 4)
    {
        cout << "It is Thursday!";
    }
    else if (n == 5)
    {
        cout << "It is Friday!";
    }
    else if (n == 6)
    {
        cout << "It is Saturday!";
    }
    else if (n == 7)
    {
        cout << "It is Sunday!";
    }
    else
    {
        cout << "Invalid choice!";
    }
    return 0;
}