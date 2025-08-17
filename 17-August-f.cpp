#include <iostream>
using namespace std;

int main()
{
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25

    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col * col << " ";
        }
        cout << endl;
    }

    return 0;
}