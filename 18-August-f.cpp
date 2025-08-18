#include <iostream>
using namespace std;

int main()
{
    // a
    // a b
    // a b c
    // a b c d
    // a b c d e

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 1; col <= row; col++)
        {
            char name = 'a' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}