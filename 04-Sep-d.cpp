#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // do while loop

    int fact = 1;
    int i = 1;

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);

    cout << "Answer: " << fact;

    return 0;
}