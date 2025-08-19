#include <iostream>
using namespace std;

int main()
{
    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int rows = 1; rows <= n; rows++)
    {
        for (int col = 1; col <= n - rows; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= rows; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}