#include <iostream>
#include <climits>
using namespace std;

void print(int arr[][4], int row, int col)
{
    int sum = INT_MIN;
    int index = -1;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total = total + arr[i][j];
            if (total > sum)
            {
                sum = total;
                index = i;
            }
        }
    }

    cout << index << " ";
}

using namespace std;

int main()
{
    // print row index with maximum sum

    // 3 4 7 18 = 32
    // 2 8 3 9  = 22
    // 5 4 2 2  = 13
    // 7 3 0 8  = 18
    // 2 8 9 1  = 20

    int arr[5][4] = {3, 4, 7, 18, 2, 8, 3, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 100};

    print(arr, 5, 4);

    return 0;
}