#include <iostream>
using namespace std;

int main()
{
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}