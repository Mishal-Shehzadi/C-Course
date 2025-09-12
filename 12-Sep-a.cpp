#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // create 2D vector, initialize it ans take user input for both rows and columns
    
    int row;
    cout << "Enter rows number: ";
    cin >> row;

    int col;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(col, vector<int>(row, 1));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "Rows: " << matrix.size() << endl;
    // cout << "Columns: " << matrix[0].size();

    return 0;
}