#include <iostream>
using namespace std;

int main()
{
    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}