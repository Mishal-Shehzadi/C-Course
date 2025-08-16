#include <iostream>
using namespace std;

int main()
{
    // check if the number is prime or not
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
    {
        cout << "It is not prime";
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "It is not prime";
                return 0;
            }
        }
        cout << "It is prime";
    }

    return 0;
}