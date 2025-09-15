#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //// print sum of each row

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int sum[4] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Sum of elements of row " << i + 1 << " is: " << sum[i] << endl;
    }

    return 0;
}