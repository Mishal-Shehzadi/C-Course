#include <iostream>
using namespace std;

int main()
{
    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    for (int row = 1; row <= 5; row++)
    {
        char name = 'a' + row - 1;

        for (int col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}
