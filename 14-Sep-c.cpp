#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // reverse 2D matrix

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {

        int start = 0;
        int end = 3 - 1;

        for (int j = 0; j < 3; j++)
        {
            while (start < end)
            {
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}