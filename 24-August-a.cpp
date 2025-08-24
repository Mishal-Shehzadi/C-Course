#include <iostream>
using namespace std;

// check if the number is prime or not using function
// find factorial of a number

void prime(int a)
{
    if (a < 2)
    {
        cout << "\nIt is not prime";
        return;
    }

    else
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                cout << "\nIt is not prime";
                return;
            }
        }
    cout << "\nIt is prime number";
}

int fact(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n1;
    cout << "Enter a number: ";
    cin >> n1;

    prime(n1);
    cout << endl;

    cout << "Factorial of " << n1 << " is " << fact(n1) << endl;

    int n2;
    cout << "Enter a number: ";
    cin >> n2;

    prime(n2);
    cout << endl;

    cout << "Factorial of " << n2 << " is " << fact(n2) << endl;

    prime(n2 - n1);
    cout << endl;

    cout << "Factorial of " << n2 - n1 << " is " << fact(n2 - n1);

    return 0;
}