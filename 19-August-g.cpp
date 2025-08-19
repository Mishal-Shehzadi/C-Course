#include <iostream>
using namespace std;

int main()
{
    //         5
    //       5 4
    //     5 4 3
    //   5 4 3 2
    // 5 4 3 2 1

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int rows = n; rows >= 1; rows--)
    {
        for (int col = 1; col <= rows-1; col++)
        {
            cout << "  ";
        }
        for (int col = n; col >= rows; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}