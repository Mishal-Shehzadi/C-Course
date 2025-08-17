#include <iostream>
using namespace std;

int main()
{
    // 10  10  10  10  10 
    // 10  10  10  10  10
    // 10  10  10  10  10
    // 10  10  10  10  10

    for (int rows = 1; rows <= 4; rows = rows + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << " 10 ";
        }
        cout << endl;
    }
    return 0;
}