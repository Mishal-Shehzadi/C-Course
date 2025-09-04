#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // do while loop

    int i = 1;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}