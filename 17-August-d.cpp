#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}