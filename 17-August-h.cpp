#include <iostream>
using namespace std;

int main()
{
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e

    // for (int rows = 1; rows <= 5; rows++)
    // {
    //     for (int col = 1; col <= 5; col++)
    //     {
    //         char name = 'a' + col - 1;

    //         cout << name <<" ";
    //     }
    //     cout << endl;
    // }

    for (int row = 1; row <= 5; row++)
    {
        for (char col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
    return 0;
}