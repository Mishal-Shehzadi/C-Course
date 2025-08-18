#include <iostream>
using namespace std;

int main()
{
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            cout << rows << " ";
        }
        cout << endl;
    }

    return 0;
}