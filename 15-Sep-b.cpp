#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // print sum of each column

    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int sum[4] = {0};

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            sum[j] = sum[j] + arr[i][j];
        }
    }

    for (int j = 0; j < 4; j++)
    {
        cout << "Sum of elements of " << j + 1 << " column is : " << sum[j] << endl;
    }

    return 0;
}