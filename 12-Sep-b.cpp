#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // print wave (look notes what it is)

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int row = 3;
    int col = 4;

    for (int j = 0; j < 4; j++)
    { // j is column
        if (j % 2 == 0)
        { // if j is evevn, we go top to bottom
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        { // if j is odd  we go from bottom to top
            for (int i = 3 - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}