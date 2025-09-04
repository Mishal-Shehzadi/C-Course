#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // while loop
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