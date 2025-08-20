#include <iostream>
using namespace std;

int main()
{

    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }
        for (int col = row - 1; col >= 1; col--)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}