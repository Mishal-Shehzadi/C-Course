#include <iostream>
using namespace std;

int main()
{
    // factorial of a number

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Answer: " << fact;

    return 0;
}