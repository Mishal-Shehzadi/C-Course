#include <iostream>
using namespace std;

int main()
{
    // print all numbers from 1 to n which are not divisible by 3 and 5 using while loop

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}