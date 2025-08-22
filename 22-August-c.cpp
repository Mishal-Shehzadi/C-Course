#include <iostream>
using namespace std;

int main()
{
    // find factorial of a number using while loop

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << "Answer: " << fact;

    return 0;
}
