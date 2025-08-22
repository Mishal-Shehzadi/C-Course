#include <iostream>
using namespace std;

int main()
{
    // print all numbers from 1 to n which are not divisible by 3 and 5 using do while loop

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    do
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}