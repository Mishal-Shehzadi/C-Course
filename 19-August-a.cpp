#include <iostream>
using namespace std;

int main()
{
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";  // 2 spaces or else the shape will be different
        }

        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}