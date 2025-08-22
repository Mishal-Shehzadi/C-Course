#include <iostream>
using namespace std;

int main()
{
    // print prime numbers using while loop

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
        int i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                cout << "It is not prime";
                return 0;
            }
            i++;
        }
        cout << "It is prime";
    }
    return 0;
}