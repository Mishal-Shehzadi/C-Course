#include <iostream>
using namespace std;

int main()
{

    //         1
    //       1 2 3
    //     1 2 3 4 5
    //   1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8 9

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}