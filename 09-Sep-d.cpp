#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // subtract 2 matrix

    // 2 3 4 5       3 4 1 2     -1 -1 3 3
    // 0 1 2 3   -   2 2 2 0  =  2 -1  0 3
    // 1 2 6 4       1 3 5 4     0 -1  1 0

    int A[3][4] = {2, 3, 4, 5, 0, 1, 2, 3, 1, 2, 6, 4};
    int B[3][4] = {3, 4, 1, 2, 2, 2, 2, 0, 1, 3, 5, 4};
    int C[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    cout << "Matrix after subtraction: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << C[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}