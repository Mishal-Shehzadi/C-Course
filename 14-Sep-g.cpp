#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // rotate matrix by 180 without breaking in 90 degrees

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;

    // columns wise swapping

    for (int j = 0; j < n; j++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }
    cout << "Matrix after column wise swapping: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // matrix after row wise swapping
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    cout << "Matrix after row wise swapping\nMatrix after 190 degree rotation: " << endl;
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