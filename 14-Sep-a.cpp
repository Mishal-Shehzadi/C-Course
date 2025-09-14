#include <iostream>
using namespace std;

int main()
{
    // transpose matrix without using swap

    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int arr[3][3];

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}