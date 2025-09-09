#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // add 2 matrix

    // 2 3 4 5       3 4 1 2     5 7 5  7
    // 0 1 2 3  and  2 2 2 0  =  2 3 4  3
    // 1 2 6 4       1 3 5 4     2 5 11 8

    int A[3][4] = {2, 3, 4, 5, 0, 1, 2, 3, 1, 2, 6, 4};
    int B[3][4] = {3, 4, 1, 2, 2, 2, 2, 0, 1, 3, 5, 4};
    int C[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    cout << "Matrix after sum: " << endl;
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