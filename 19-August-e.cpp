#include <iostream>
using namespace std;

int main()
{
    //         a
    //       b b
    //     c c c
    //   d d d d
    // e e e e e

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int rows = 1; rows <= n; rows++)
    {
        char name = 'a' + rows - 1;

        for (int col = 1; col <= n - rows; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= rows; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}