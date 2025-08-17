#include <iostream>
using namespace std;

int main()
{
    // a a a a a
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e

    for (int rows = 1; rows <= 5; rows++)
    {
        char name = 'a' + rows - 1;
        
        for (int col = 1; col <= 5; col++)
        {
            cout << name <<" ";
        }
        cout << endl;
    }

    return 0;
}