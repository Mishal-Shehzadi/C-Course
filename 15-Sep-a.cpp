#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // rotate matrix by 90 degree (anti-clockwise)

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;

    cout << "Original matris is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    cout << "Matrix after transpose: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

    // column wise rotation
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

    cout << "Final matrix after 90 rotation (anti-clockwise): " << endl;
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